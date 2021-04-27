//
// Created by vishal on 4/21/21.
//

#include "Book.h"
#include <typeinfo>
int Book :: index = 0;
int Book ::roll = 1;
int Book ::exid = 100;

void Book::Past() {
    if(flag) {
        fstream readFile;
        readFile.open("past.txt");
        if (!readFile) { // file couldn't be opened
            cout << "Error: file could not be opened" << endl;
            exit(1);
        }
        int a;
        srand(time(NULL));
        string alphabet[] = {"A+", "B+", "C+", "D+", "F",
                             "A", "B", "C", "D",
                             "A-", "B-", "C-", "D-",
        };
        bool flag = false;
        while (!readFile.eof()) {
            readFile >> a;
            for (int i = 0; i < index; i++) {
                if (s[i].getEid() == a) {
                    cout << "Name = " << s[i].getFirst() << "  " << s[i].getMiddle() << " " << s[i].getLast() << " "
                         << "Exam Id " << s[i].getEid() << " DATE  " << s[i].getDate() << " Grade "
                         << alphabet[rand() % 13] << endl;
                }
            }
        }
    }
    else
    {
        cout<<"No one is registered"<<endl;
    }
}


void Book::Booked_Students() {
    if( flag) {
        int avg=0;
        int lowest=101,highest=-1;
        for(int i=0; i<index; i++)
        {
            int marks=rand()%101;
            cout<<s[i].getFirst()<<" "<<s[i].getMiddle()<<" "<<s[i].getLast()<<" Marks = "<<marks<<endl;
            if(marks>highest)
            {
                highest=marks;
            }
            if(marks<lowest )
            {
                lowest=marks;
            }
            avg+=marks;
        }
        cout<<"Highest "<<highest<<" Lowest = "<<lowest <<" average = "<<avg/index+1<<endl;

    }
    else
    {
        cout<<"no one is booked"<<endl;
    }
}

void Book::Booking() //
{
    fstream readFile;
    string name;
    cout<<"Enter file name in this pattern == > file.txt"<<endl;
    cin>>name;
    readFile.open(name);
    if (!readFile) { // file couldn't be opened
        cout << "Error: file could not be opened" << endl;
        exit(1);
    }
    flag=true;
    string a;
    while (!readFile.eof()) {
        readFile >> a;
        s[index].setFirst(a);
        cout << a << " ";
        readFile >> a;
        s[index].setMiddle(a);
        cout << a << " ";
        readFile >> a;
        s[index].setLast(a);
        cout << a << " ";
        readFile >> a;
        s[index].setCounBirth(a);
        readFile >> a;
        s[index].setDob(a);
        readFile >> a;
        s[index].setDate(a);
        readFile >> a;
        s[index].setType(a);
        s[index].setBookedSeats(s[index].getBookedSeats() + 1);
        s[index].setAvailableSeats(s[index].getAvailableSeats() - 1);
        s[index].setSid(roll);
        s[index].setEid(exid);
        index++;
        roll++;
        exid++;
        cout << "Has been booked" << endl;

    }
    cout<<"Avaialbe Seats = "<<s[index].getAvailableSeats()<<endl;
    cout<<"Booked Seats = "<<s[index].getBookedSeats()<<endl;
    readFile.close();
}
