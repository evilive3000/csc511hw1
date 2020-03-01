#CSC511  Programming Assignment #1 Spring 2020
###4 points
Due March 4, 2020 in class as hard copy printout

This is a signature assignment. 
Its aim is to provide assessment for ITU of student proficiency in this course across various sections and terms of this course. 
The signature assignment assesses two or more course learning outcomes. 
Its main use is to assess this course to guide changes in its teaching, CLOs, and testing methods for ITU.
Form groups of up to 2 students. 
Write the following Abstract Data Types in C++: 
 * Person
 * Student
 * GradStudent
 * PhDStudent. 
 
Below is the class hierarchy. 

    Person ⇦ Student ⇦ GradStudent ⇦ PhDStudent

Work with g++ in command line mode. 
This program consists of 9 separate files. 
Use the preprocessor directives correctly.

In main() declare an array of Person*, size of the array is 10. 
 * class `Person` serves as the base class as shown above. It has the data: **name**, **age**.  
 It has the methods: **constructor()**, **getName()**, **getAge()**, virtual void **vprint()**.
 * class `Student`: 
 It is like Person plus string **major**.  It has the methods: **constructor**, (overridden) **vprint()**, **getMajor()**.
 * class `GradStudent`: 
 Like Student, plus string **thesis**.  It has the methods: **constructor**, (overridden) **vprint()**, **getThesis()**.
 * class `PhDStudent`:
 like GradStudent plus string **dissertation**.  It has the methods: **constructor**, (overridden) **vprint()**, **getDissertation()**. 
 
Copy this and paste it into the folder for the 9 program files for this assignment. 
Then you can run and develop this program by being in this folder with the terminal window.
You might notice that none of the objects in the input file are of type `Person`, only derived classes occur, 
a `Person` object is never constructed. `Person` serves only as the base class to make the code more readable and safe. 
In main() go into a loop of length 10 and read from the file hw1per.txt. (Reading from a file: Lecture 10.) 
Read from this file linewise: the first string on a line is either stu or gra or phd. 
Depending on this you read the following items off the line and construct either a `Student`, or a `GradStudent` or a `PhDStudent`. 
Then put a pointer to this Person in the array. 
As soon as 10 lines are read and the `Person` objects are constructed, go in a separate loop through the array and print all `Persons` out. 
The **vprint()** function of all classes is polymorphic. Each class’s vprint uses the vprint of the base class. 
All data of the printed `Person` object are printed in one line, there is only one carriage return in each Person’s printing and it is done not in main(). 
Hint: Provide a non-poymorphic print method in `Person`, which is the same for all classes, and it calls the polymorphic vprint method.
If the polymorphic **vprint()** function prints correctly, but _without using the **vprint()** code of its parent class, the assignment gets up to 4 points_. 
_If each vprint() uses the vprint() code of the parent class correctly, the assignment can get up to 2 additional bonus points._
All programs work with the same input file: hw1per.txt.
Work either alone or in a group of size 2. 
As a normal case: both students in the group get the same number of points. 
Print all your written code plus the output of running your code in one printout with the name csc511hw1.cpp, and submit that. 
The source code should contain the .h and .cpp files in the order: 
 * Person.h
 * Person.cpp
 * Student.h
 * Student.cpp
 * ...etc.
 
The last code file is main.cpp, then comes the output from running the program. 
Each submitted printout must contain the names of the students in the group.

Observe that file names start with lower case letter, class names start with upper case letter.
```
GradStudent: Ken  age:26  mj:Journalism  th:Mediatopics
PhDStudent: Roger  age:29  mj:History  th:CivilWar  diss:Henry-8th 
Student: Olga  age:20  mj:Poultrysci 
```
