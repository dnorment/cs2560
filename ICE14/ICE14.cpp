/**
 * @author Daniel Norment
 * @author Augustin Viju
 */

#include "Teacher.h"
#include <iostream>

using namespace std;

void printTeacher(Teacher &t)
{
	cout << t.getName() << endl;
	cout << t.getEmail() << endl;
	cout << "Phone#: " << t.getPhoneNum() << endl;
	cout << "Employee#: " << t.getEmpNum() << endl;
	cout << "Salary: $" << t.getEmpSalary() << endl;
	cout << "Grade: " << t.getGrade() << endl << endl;
}

int main()
{
	Teacher val = Teacher("Val Feist", "aspval@cpp.edu", 1234567890, 1011010, 10, 14);
	printTeacher(val);
	Teacher jj = Teacher("Jonathan Johannsen", "jdjohannsen@cpp.edu", 9087654321, 0100101, 100000000, 15);
	printTeacher(jj);
	return 0;
}