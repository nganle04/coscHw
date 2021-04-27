//
// Created by vishal on 4/21/21.
//

#ifndef UNTITLED30_STUDENT_H
#define UNTITLED30_STUDENT_H

#include "Exam.h"

class Student : public Exam {
    static int sid;
    string first, last, middle;
    string coun_birth;
    string dob;
public:
    static int getSid();

    static void setSid(int sid);

    const string &getFirst() const;

    void setFirst(const string &first);

    const string &getLast() const;

    void setLast(const string &last);

    const string &getMiddle() const;

    void setMiddle(const string &middle);

    const string &getCounBirth() const;

    void setCounBirth(const string &counBirth);

    const string &getDob() const;

    void setDob(const string &dob);

    void Take_input();

    void Display();

};


#endif //UNTITLED30_STUDENT_H
