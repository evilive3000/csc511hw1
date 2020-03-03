#include <iostream>
#include "Student.h"

using namespace std;

Student::Student() : Person(), discipline("") {}

Student::Student(string name, int age, string discipline)
    : Person(name, age), discipline(discipline) {}

Student::Student(Student &s)
    : Person(s), discipline(s.discipline) {}

void Student::vprint() {
  Person::vprint();
  cout << " mj:" << discipline;
}

string Student::getMajor() { return discipline; }

string Student::getStatus() { return "Student"; }
