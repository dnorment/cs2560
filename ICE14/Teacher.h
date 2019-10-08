#include "Person.h"
#include "Employee.h"

class Teacher : public Person, public Employee
{
private:
	int grade;
public:
	Teacher(string name, string email, int phone, int empNum, double empSal, int g);
	int getGrade();
};