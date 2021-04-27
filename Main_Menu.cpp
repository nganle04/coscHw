//
// Created by vishal on 4/21/21.
//

#include "Main_Menu.h"

void Main_Menu::Print() {
    while(true) {
        int choice;
        cout << "|-------------------------------------------------|" << endl;
        cout << "| Enter your choice                               |" << endl;
        cout << "| Press 1 to register students in Exam            |" << endl;
        cout << "| Press 2 to Review the students marks            |" << endl;
        cout << "| Press 3 to show students already given the Exam |" << endl;
        cout << "| Press any other key to exit                     |" << endl;
        cout << "|-------------------------------------------------|" << endl;
        cin >> choice;
        if (choice == 1)
            b.Booking();
        else if (choice == 2)
            b.Booked_Students();
        else if (choice == 3)
             b.Past();
        else
            break;
    }
}

Main_Menu::Main_Menu() {
    username = "";
    password = "";
}

void Main_Menu::Take_Input() {
    cout << "Enter Username" << endl;
    cin >> username;
    cout << "Password" << endl;
    cin >> password;
    cout << "Access Verified" << endl;
}
