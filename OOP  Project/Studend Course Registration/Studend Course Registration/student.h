#pragma once
#include <iostream>
#include "course.h"
using namespace std;

class Student {
private:
    string id;
    string name;
    Course course;

public:
    Student();
    Student(string nid, string nname, Course ncourse); // updated constructor
    void display();
};
