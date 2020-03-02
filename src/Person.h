#ifndef CSC511HW1_PERSON_H
#define CSC511HW1_PERSON_H

using namespace std;

class Person {
  string name;
  int age;
public:
  Person();

  Person(string, int);

  Person(Person &);

  virtual void vprint();

  void println();

  string getName();

  int getAge();

  virtual string getStatus();
};


#endif //CSC511HW1_PERSON_H
