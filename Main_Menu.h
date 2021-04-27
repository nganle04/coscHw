//
// Created by vishal on 4/21/21.
//

#ifndef UNTITLED30_MAIN_MENU_H
#define UNTITLED30_MAIN_MENU_H


#include "Book.h"

class Main_Menu {
    string username;
    string password;
    Book b;
public:
    Main_Menu();

    void Take_Input();

    void Print();
};

#endif //UNTITLED30_MAIN_MENU_H
