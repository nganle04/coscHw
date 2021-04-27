//
// Created by vishal on 4/21/21.
//

#include "Student.h"
int Student :: sid = 0;

int Student::getSid() {
    return sid;
}

void Student::setSid(int sid) {
    Student::sid = sid;
}

void Student::setFirst(const string &first) {
    Student::first = first;
}

void Student::Display() {
    cout << "First name = " << first << endl;
    cout << "middle name = " << middle << endl;
    cout << "Last name = " << last << endl;
    cout << "birth Country name = " << coun_birth << endl;
    cout << "birth of date = " << coun_birth << endl;
    cout << "Past exam id = " << Exam::eid << endl;
    cout << "Past exam date = " << Exam::date << endl;
    cout << "Past Grade received = " << Exam::grade << endl;
}

void Student::Take_input() {
    cout << "First Name " << endl;
    getline(cin, first);
    cout << "middle Name" << endl;
    getline(cin, middle);
    cout << "Last Name" << endl;
    getline(cin, last);
    cout << "Birth Country Name" << endl;
    getline(cin, coun_birth);
    cout << "Birth of date" << endl;
    getline(cin, dob);
    Exam::Take_Input();
    sid++;
}

void Student::setDob(const string &dob) {
    Student::dob = dob;
}

const string &Student::getDob() const {
    return dob;
}

void Student::setCounBirth(const string &counBirth) {
    coun_birth = counBirth;
}

const string &Student::getCounBirth() const {
    return coun_birth;
}

void Student::setMiddle(const string &middle) {
    Student::middle = middle;
}

const string &Student::getMiddle() const {
    return middle;
}

void Student::setLast(const string &last) {
    Student::last = last;
}

const string &Student::getLast() const {
    return last;
}

const string &Student::getFirst() const {
    return first;
}
