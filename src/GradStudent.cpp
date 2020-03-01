#include <iostream>
#include "GradStudent.h"

using namespace std;

GradStudent::GradStudent() : Student(), thesis("") {}

GradStudent::GradStudent(
        string name,
        int age,
        string major,
        string thesis
) : Student(name, age, major), thesis(thesis) {}

GradStudent::GradStudent(GradStudent &g) : Student(g), thesis(g.thesis) {}

void GradStudent::vprint() {
    Student::vprint();
    cout << " " << thesis;
}

string GradStudent::getThesis() {
    return thesis;
}

string GradStudent::getStatus() {
    return "GradStudent";
}
