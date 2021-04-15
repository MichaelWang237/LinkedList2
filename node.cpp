#include "node.h"
#include "student.h"
#include <cstring>
#include <iostream>
//Constructor
node::node(student* aStudent)
{
	nStudent = aStudent;
	next = NULL;
}
//Get the next node in the linked list
//NULL if bottom of list
node* node::getNext()
{
	return next;
}

//Get the student associated with this node
student* node::getStudent()
{
	return nStudent;
}

//Set the next node in the list
void node::setNext(node* newNext)
{
	next = newNext;
}

//Set the student associated with this node
void node::setStudent(student* newStudent)
{
	nStudent = newStudent;
}

//Free the memory allocated to the student
node::~node()
{
	delete nStudent;
}
