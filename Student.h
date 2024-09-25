/*
    File Name : Student.h
    Author Name : Michael Cates
    Purpose : Header file for the Student class of the GitWorkin! program
*/

#ifndef STUDENT_H
#define STUDENT_H

#include "Courses.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Student  {
    private:
        string name;
        int age;
        int year;
        //array of Courses type
        Courses myCourses;

    public:
        //Constructors:
        Student(){
            //cout << "\nStudent created.";
            name = "John Doe";
            age = 18;
            year = 1;
        }

        Student(string studentName, int studentAge, int studentYear, Courses* courses){
            name = studentName;
            age = studentAge;
            year = studentYear;
            myCourses = *courses;
        }

        //Member Function Declarations:
        void printStudentInfo();
   
};


#endif