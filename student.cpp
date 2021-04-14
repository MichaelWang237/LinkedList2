//Mark Zhang - 10 April 2021 - Linked List Part 2
//cpp file for the student class
//contains constructor and destructor for the student class
//and has 4 functions that return information
#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;

student::student(char* first, char* last, int idNum, float grade)
{
    firstN = first;
    lastN = last;
    ID = idNum;
    GPA = grade;
}

char* student::getFirst()
{   
    return firstN;
}

char* student::getLast()
{
    return lastN;
}

int student::getID()
{
    return ID;
}

float student::getGrade()
{
    return GPA;
}

student::~student()
{
   delete firstN, lastN, ID, GPA;
}
