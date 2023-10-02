#include"wagEmployee.h"
class salesperson:public wagEmployee
{
	int no_of_item;
	float com_per_item;
public:
	salesperson();
	salesperson(int, const char* , int, int, int, int, int, int, int);
	// void Display();
	void Display();
	float getSalary();
};
