#include <set>
#include <iostream>
#include "src/Person.h"
#include "src/Student.h"
#include "src/GradStudent.h"
#include "src/PhDStudent.h"

using namespace std;

/**
 *  Search for the next "stu|gra|phd" in file and create corresponding Person
 */
Person *readPerson(ifstream &file) {
  std::set<string> types{"stu", "gra", "phd"};
  string type, name, major;
  int age;

  do { file >> type; } while (types.count(type) == 0 && !file.eof());

  file >> name >> age >> major;

  if (type == "stu") {
    return new Student(name, age, major);
  }

  string thesis;
  file >> thesis;

  if (type == "gra") {
    return new GradStudent(name, age, major, thesis);
  }

  string dissertation;
  file >> dissertation;

  if (type == "phd") {
    return new PhDStudent(name, age, major, thesis, dissertation);
  }

  return nullptr;
}

int main() {
  int count = 10, i = 0;
  Person *people[count];
  Person *p;
  ifstream file("../data/hw1per.txt");

  while ((i < count) && (p = readPerson(file))) {
    people[i++] = p;
  }

  for (int k = 0; k < i; k++) {
    people[k]->println();
  }

  return 0;
}