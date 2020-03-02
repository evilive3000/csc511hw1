#include <iostream>
#include "PhDStudent.h"

using namespace std;

PhDStudent::PhDStudent()
        : GradStudent(), dissertation("") {}

PhDStudent::PhDStudent(string name, int age, string major,
                       string thesis, string dissertation)
        : GradStudent(name, age, major, thesis), dissertation(dissertation) {}

PhDStudent::PhDStudent(PhDStudent &p)
        : GradStudent(p), dissertation(p.dissertation) {}

void PhDStudent::vprint() {
    GradStudent::vprint();
    cout << " " << dissertation;
}

string PhDStudent::getDissertation() { return dissertation; }

string PhDStudent::getStatus() { return "PhDStudent"; }
