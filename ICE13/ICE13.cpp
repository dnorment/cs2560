/**
 * @author Daniel Norment
 * @author Augustin Viju
 */

#include "ProductionWorker.h"
#include <iostream>

int main()
{
	Employee worker1 = Employee();
	worker1.setEmpNum(50);
	cout << worker1.getEmpNum() << endl;
	Employee worker2 = Employee("Daniel", 216, 21, 3, 1998);
	cout << worker2.getHireDate().month << endl;
	ProductionWorker worker3 = ProductionWorker();
	cout << worker3.getEmpName() << endl;
	worker3.setEmpName("WORKER");
	cout << worker3.getEmpName() << endl;
	ProductionWorker worker4 = ProductionWorker("Daniel", 216, 21, 3, 1998, 2, 40000);
	cout << worker4.getPayRate() << endl;
	return 0;
}