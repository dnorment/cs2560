#include <string>

using namespace std;

class Employee
{
protected:
	int employeeNumber;
	double employeeSalary;
public:
	Employee(int num, double pay);
	int getEmpNum();
	double getEmpSalary();
};