//
// Created by vishal on 4/21/21.
//

#ifndef UNTITLED30_EXAM_H
#define UNTITLED30_EXAM_H

#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Exam {
protected:
    string date;
    string type;
    static int available_seats, booked_seats;
    double highest, lowest, mean;
    string grade;
    static int eid;
public:
    static int getEid();

    static void setEid(int eid);

    const string &getDate() const;

    void setDate(const string &date);

    const string &getType() const;

    void setType(const string &type);

    int getAvailableSeats() const;

    void setAvailableSeats(int availableSeats);

    int getBookedSeats() const;

    void setBookedSeats(int bookedSeats);

    double getHighest() const;

    void setHighest(double highest);

    double getLowest() const;

    void setLowest(double lowest);

    double getMean() const;

    void setMean(double mean);

    const string &getGrade() const;

    void setGrade(const string &grade);

    Exam();

    void Take_Input();

    virtual void Display();
};


#endif //UNTITLED30_EXAM_H
