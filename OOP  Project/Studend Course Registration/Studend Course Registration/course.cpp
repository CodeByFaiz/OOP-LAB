#include<iostream>
#include"course.h"
using namespace std;
Course::Course() {
	select = true;

	oop = false;
	physics = false;
	discrete = false;
	statistics = false;
	calculus = false;

	oop_time = 0;
	physics_time = 0;
	discrete_time = 0;
	statistics_time = 0;
	calculus_time = 0;

	oop_day = "none";
	physics_day = "none";
	discrete_day = "none";
	statistics_day = "none";
	calculus_day = "none";
}

Course::Course(bool noop, int noop_time, string noop_day, bool nphysics, int nphysics_time, string nphysics_day, bool ndiscrete, int ndiscrete_time, string ndiscrete_day, bool nstatistics, int nstatistics_time, string nstatistics_day, bool ncalculus, int ncalculus_time, string ncalculus_day){
	select = true;
	oop = noop;
	physics = nphysics;
	discrete = ndiscrete;
	statistics = nstatistics;
	calculus = ncalculus;

	oop_time = noop_time;
	physics_time = nphysics_time;
	discrete_time = ndiscrete_time;
	statistics_time = nstatistics_time;
	calculus_time = ncalculus_time;

	oop_day = noop_day;
	physics_day = nphysics_day;
	discrete_day = ndiscrete_day;
	statistics_day = nstatistics_day;
	calculus_day = ncalculus_day;


	if (oop != select || physics!=select || discrete!=select || statistics!=select || calculus!=select) {
		cout << "One or more course is not selected"<<endl;
	}
	else if (
		(oop_time == physics_time && oop_day == physics_day) ||
		(oop_time == discrete_time && oop_day == discrete_day) ||
		(oop_time == statistics_time && oop_day == statistics_day) ||
		(oop_time == calculus_time && oop_day == calculus_day) ||

		(physics_time == discrete_time && physics_day == discrete_day) ||
		(physics_time == statistics_time && physics_day == statistics_day) ||
		(physics_time == calculus_time && physics_day == calculus_day) ||

		(discrete_time == statistics_time && discrete_day == statistics_day) ||
		(discrete_time == calculus_time && discrete_day == calculus_day) ||

		(statistics_time == calculus_time && statistics_day == calculus_day)
		) {
		cout << "UStaad clash aa ria ae"<<endl;
	}
	else {
		cout << "All course have selected"<<endl;
	}
}
void Course::display() {
	cout << "You Selected Courses:\n" << endl;
	

	if (oop) {
		cout << "1. OOP | Teacher: Arham | Section: W9A | Time: " << oop_time << " | Day: " << oop_day << endl;
	}
	if (physics) {
		cout << "2. Physics | Teacher: Arslan Asif | Section: W9 | Time: " << physics_time << " | Day: " << physics_day << endl;
	}
	if (discrete) {
		cout << "3. Discrete | Teacher: Faiz | Section: C55 | Time: " << discrete_time << " | Day: " << discrete_day << endl;
		
	}
	if (statistics) {
		cout << "4. Statistics | Teacher: Mateen | Section: C27 | Time: " << statistics_time << " | Day: " << statistics_day << endl;
		
	}
	if (calculus) {
		cout << "5. Calculus | Teacher: Ali | Section: W1 | Time: " << calculus_time << " | Day: " << calculus_day << endl;
	}
}