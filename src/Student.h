#ifndef CSC511HW1_STUDENT_H
#define CSC511HW1_STUDENT_H

#include <fstream>
#include "Person.h"

using namespace std;

class Student : public Person {
  string discipline;
public:
  Student();

  Student(string, int, string);

  Student(Student &);

  void vprint();

  string getMajor();

  string getStatus();
};

#endif //CSC511HW1_STUDENT_H
