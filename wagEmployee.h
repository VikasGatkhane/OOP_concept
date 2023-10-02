#include"Employee.h"
class wagEmployee:public Employee
{
	int hours;
	int rate;
public :
	wagEmployee();
	wagEmployee(int, const char* , int, int, int, int, int);
	void Display();
	float getSalary();
};
