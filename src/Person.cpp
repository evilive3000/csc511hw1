#include <iostream>
#include "Person.h"

using namespace std;

Person::Person() : name(""), age(0) {}

Person::Person(string name, int age) : name(name), age(age) {}

Person::Person(Person &p) : name(p.name), age(p.age) {}

void Person::vprint() {
    cout << getStatus() << ": " << name << " " << age;
}

void Person::println() {
    vprint();
    cout << endl;
}

string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}

string Person::getStatus() {
    return "Person";
}