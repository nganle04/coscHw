//
// Created by vishal on 4/21/21.
//

#ifndef UNTITLED30_BOOK_H
#define UNTITLED30_BOOK_H


#include "Student.h"
#define Size 5

class Book {
    Student s[Size];
    Student p[Size];
    static int index;
    static int roll;
    static int exid;
    bool flag;

public:
    Book()
    {
        flag=false;
    }


    void Booking();

    void Booked_Students();

    void Past();

};

#endif //UNTITLED30_BOOK_H
