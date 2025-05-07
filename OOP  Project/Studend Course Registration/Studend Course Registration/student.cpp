#include <iostream>
#include "student.h"
using namespace std;

Student::Student() {
    id = "0";
    name = "Unknown";
}

Student::Student(string nid, string nname, Course ncourse) {
    id = nid;
    name = nname;
    course = ncourse;
}

void Student::display() {
    cout << "\nStudent Information\n";
    cout << "\tStudent name is " << name << " and id is " << id << endl;
    course.display();
}
