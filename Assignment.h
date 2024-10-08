/*
    File Name : Assignment.h
    Author Name : Nino Chindavanh
    Purpose : 
*/

#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include <iostream>
#include <string>

using namespace std;

class Assignment
{
    private:
        string name;
        string dueDate;         // (mm/dd/yyyy)
        int priorityLevel;      // (1-5)
        string notes;             // (Limited to 75 Characters)

    public:
        //default constructor:
        Assignment()
        {
            // overloaded constructor takes in info
            name = "N/A";
            dueDate = "N/A";
            priorityLevel = 1;
            // notes;
        }

        //overloaded constructor:
        Assignment(string assignmentName, string assignmentDueDate, int assignmentPriorityLevel, string assignmentNotes){

            name = assignmentName;
            dueDate = assignmentDueDate;
            priorityLevel = assignmentPriorityLevel;
            notes = assignmentNotes;

        }          

        //Methods:

        //getter methods:
        void getInfo();

        string getName();
        string getDueDate();
        int getPriorityLevel();
        string getNotes();

        //mutator methods:
        void setName(string);
        void setDueDate(string);
        void setPriorityLevel(int);
        void setNotes(string);
    
};


#endif