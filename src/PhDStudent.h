#ifndef CSC511HW1_PHDSTUDENT_H
#define CSC511HW1_PHDSTUDENT_H

#include "GradStudent.h"

class PhDStudent : public GradStudent {
    string dissertation;
public:
    PhDStudent();

    PhDStudent(string, int, string, string, string);

    PhDStudent(PhDStudent &);

    void vprint();

    string getDissertation();

    string getStatus();
};


#endif //CSC511HW1_PHDSTUDENT_H