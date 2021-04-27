//
// Created by vishal on 4/21/21.
//

#include "Exam.h"
int Exam :: eid = 0;

int Exam :: available_seats = 50;
int Exam :: booked_seats = 15;

void Exam::setType(const string &type) {
    Exam::type = type;
}

const string &Exam::getType() const {
    return type;
}

int Exam::getEid() {
    return eid;
}

void Exam::setEid(int eid) {
    Exam::eid = eid;
}

const string &Exam::getDate() const {
    return date;
}

void Exam::setDate(const string &date) {
    Exam::date = date;
}

int Exam::getAvailableSeats() const {
    return available_seats;
}

void Exam::setAvailableSeats(int availableSeats) {
    available_seats = availableSeats;
}

int Exam::getBookedSeats() const {
    return booked_seats;
}

double Exam::getHighest() const {
    return highest;
}

void Exam::setHighest(double highest) {
    Exam::highest = highest;
}

void Exam::setBookedSeats(int bookedSeats) {
    booked_seats = bookedSeats;
}

void Exam::setLowest(double lowest) {
    Exam::lowest = lowest;
}

double Exam::getLowest() const {
    return lowest;
}

double Exam::getMean() const {
    return mean;
}

void Exam::setMean(double mean) {
    Exam::mean = mean;
}

const string &Exam::getGrade() const {
    return grade;
}

void Exam::setGrade(const string &grade) {
    Exam::grade = grade;
}

Exam::Exam() {
    date = "";
    type = "";
    highest = 0, lowest = 0, mean = 0;
    grade = "";
//        eid++;
}

void Exam::Take_Input() {
    cout << "Date of Exam" << endl;
    getline(cin, date);
    cout << "Type of Exam" << endl;
    getline(cin, type);
    cout << "Available seats for Exam" << endl;
    cin >> available_seats;
    cout << "Booked seats for Exam" << endl;
    cin >> booked_seats;
    cout << "Highest Marks in  Exam" << endl;
    cin >> highest;
    cout << "Lowest Marks in  Exam" << endl;
    cin >> lowest;
    cout << "Mean Marks in  Exam" << endl;
    cin >> mean;
    cout << "Grade in Exam" << endl;
    getline(cin, grade);
    eid++;

}

void Exam::Display() {
    cout << "Date of Exam = > " << date << endl;
    cout << "Type of Exam = > " << type << endl;
    cout << "Available seats for Exam = > " << available_seats - booked_seats << endl;
    cout << "Booked seats for Exam = > " << booked_seats << endl;
    cout << "Highest Marks in  Exam = > " << highest << endl;
    cout << "Lowest Marks in  Exam = > " << lowest << endl;
    cout << "Mean Marks in  Exam = > " << mean << endl;
    cout << "Grade in Exam = > " << grade << endl;
}
