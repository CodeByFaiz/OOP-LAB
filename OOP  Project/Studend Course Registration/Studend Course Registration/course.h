#pragma once
#include<iostream>
using namespace std;
class Course {
	bool select;
	bool oop, physics, discrete, statistics, calculus;
	int oop_time, physics_time, discrete_time, statistics_time, calculus_time;
	string oop_day, physics_day, discrete_day, statistics_day, calculus_day;
public:
	Course();
	Course(bool noop, int noop_time, string noop_day, bool nphysics, int nphysics_time, string nphysics_day, bool ndiscrete, int ndiscrete_time, string ndiscrete_day, bool nstatistics, int nstatistics_time,string nstatistics_day, bool ncalculus, int ncalculus_time,string ncalculus_day);
	void display();
};