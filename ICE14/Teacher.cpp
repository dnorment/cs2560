#include "Teacher.h"

Teacher::Teacher(string name, string email, int phone, int empNum, double empSal, int g) : Person(name, email, phone), Employee(empNum, empSal)
{
	grade = g;
}

int Teacher::getGrade()
{
	return grade;
}