#include<iostream>
#include"student.h"
#include"course.h"
using namespace std;
int main() {
	int select;
	int oop_time, physics_time, discrete_time, statistics_time, calculus_time;
	string oop_day, physics_day, discrete_day, statistics_day, calculus_day;
	int select_day;
	string name, id;
	bool oop = false, physics = false, discrete = false, statistics = false, calculus = false;
	while (true) {
		cout << "\t\t\t\tStudent Course Registration System" << endl;
		cout << "6. Enter name and id\n1. OOP|Arham|W9A section\n2. Physics|Arslan Asif|W9 SEction\n3. Discrete|Faiz|section C55\n4. Statistics|Mateen|C27 Section\n5. Calculus|Ali|W1 section" << endl;
		cout << "7. Se your schedule" << endl;
		cout << "It is to be noted that the day of Saturday is off For Students \nEk din mai sirf ek course ki class ho gi" << endl;
		cout << "Enter 0 to quit: " << endl;
		cout << "Select option : ";
		cin >> select;
		if (select == 0) {
			break;
		}
		else if (select == 6) {
			cout << "Enetr your name: ";
			cin >> name;
			cout << "Enter your id: ";
			cin >> id;
		}
		else if (select == 1) {
			cout << "OOP is selected" << endl;
			oop = true;
			cout << "Enter your time: ";
			cin >> oop_time;

			cout << "1. monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday" << endl;
			cout << "Enter day of class: " << endl;
			cin >> select_day;
			if (select_day == 1) {
				oop_day = "monday";
			}
			else if (select_day == 2) {
				oop_day = "tuesday";
			}
			else if (select_day == 3) {
				oop_day = "wednesday";
			}
			else if (select_day == 4) {
				oop_day = "thursday";
			}
			else if (select_day == 5) {
				oop_day = "friday";
			}
			else {
				cout << "Invalid thing" << endl;
			}
		}


		else if (select == 2) {
			cout << "Physics is selected" << endl;
			physics = true;
			cout << "Enter your time" << endl;
			cin >> physics_time;
			cout << "1. monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday" << endl;
			cout << "Enter day of class: " << endl;
			cin >> select_day;
			if (select_day == 1) {
				physics_day = "monday";
			}
			else if (select_day == 2) {
				physics_day = "tuesday";
			}
			else if (select_day == 3) {
				physics_day = "wednesday";
			}
			else if (select_day == 4) {
				physics_day = "thursday";
			}
			else if (select_day == 5) {
				physics_day = "friday";
			}
			else {
				cout << "Invalid thing" << endl;
			}
		}

		else if (select == 3) {
			cout << "Discrete is selected" << endl;
			discrete = true; 
			cout << "Enter your time: ";
			cin >> discrete_time;
			cout << "1. monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday" << endl;
			cout << "Enter day of class: " << endl;
			cin >> select_day;
			if (select_day == 1) {
				discrete_day = "monday";
			}
			else if (select_day == 2) {
				discrete_day = "tuesday";
			}
			else if (select_day == 3) {
				discrete_day = "wednesday";
			}
			else if (select_day == 4) {
				discrete_day = "thursday";
			}
			else if (select_day == 5) {
				discrete_day = "friday";
			}
			else {
				cout << "Invalid thing" << endl;
			}
		}
		else if (select == 4) {
			cout << "Statistics is selected" << endl;
			statistics = true;
			cout << "Enter your time: " << endl;
			cin >> statistics_time;
			cout << "1. monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday" << endl;
			cout << "Enter day of class: " << endl;
			cin >> select_day;
			if (select_day == 1) {
				statistics_day = "monday";
			}
			else if (select_day == 2) {
				statistics_day = "tuesday";
			}
			else if (select_day == 3) {
				statistics_day = "wednesday";
			}
			else if (select_day == 4) {
				statistics_day = "thursday";
			}
			else if (select_day == 5) {
				statistics_day = "friday";
			}
			else {
				cout << "Invalid thing" << endl;
			}

		}
		else if (select == 5) {
			cout << "Calculus is selected" << endl;
			calculus = true;
			cout << "enter your time: ";
			cin >> calculus_time;
			cout << "1. monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday" << endl;
			cout << "Enter day of class: " << endl;
			cin >> select_day;
			if (select_day == 1) {
				calculus_day = "monday";
			}
			else if (select_day == 2) {
				calculus_day = "tuesday";
			}
			else if (select_day == 3) {
				calculus_day = "wednesday";
			}
			else if (select_day == 4) {
				calculus_day = "thursday";
			}
			else if (select_day == 5) {
				calculus_day = "friday";
			}
			else {
				cout << "Invalid thing" << endl;
			}
		}
		else if (select == 7) {
			Course c1(oop, oop_time, oop_day, physics, physics_time, physics_day,
				discrete, discrete_time, discrete_day,
				statistics, statistics_time, statistics_day,
				calculus, calculus_time, calculus_day);

			Student s1(id, name, c1);
			s1.display();

		}
	}
}
