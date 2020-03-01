#ifndef CSC511HW1_GRADSTUDENT_H
#define CSC511HW1_GRADSTUDENT_H


#include "Student.h"

class GradStudent : public Student {
    string thesis;

public:
    GradStudent();

    GradStudent(string, int, string, string);

    GradStudent(GradStudent &);

    void vprint();

    string getThesis();

    string getStatus();
};


#endif //CSC511HW1_GRADSTUDENT_H
