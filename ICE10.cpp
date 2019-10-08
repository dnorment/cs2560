/**
 * @author Daniel Norment
 * @author Augustin Viju
 */

#include <iostream>
#include <vector>

using namespace std;

struct Student
{
	string name;
	enum Standing { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR };
	int year;
};

struct Course
{
	vector<Student*> students;
	int number;
	string name;
};

void addStudent(Course &course, Student* student)
{
	course.students.push_back(student);
}

int studentCount(Course &course, int yr)
{
	int count = 0;
	for (unsigned int i = 0; i < course.students.size(); i++)
	{
		if (course.students[i]->year == yr)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	vector<Student*> students;
	Course cs2560 = {students, 12345, "C++"};
	Student *student1 = new Student {"Daniel", 2};
	Student *student2 = new Student {"Augustin", 3};
	Student *student3 = new Student {"Val", 2};
	cout << "There are " << studentCount(cs2560, 2) << " juniors" << endl;
	addStudent(cs2560, student1);
	addStudent(cs2560, student2);
	addStudent(cs2560, student3);
	cout << "There are " << studentCount(cs2560, 2) << " juniors" << endl;
	cout << "There are " << studentCount(cs2560, 3) << " seniors" << endl;
	delete student1;
	delete student2;
	delete student3;
	return 0;
}
