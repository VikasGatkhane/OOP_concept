#include<iostream>
#include"salesperson.h"
using namespace std;
salesperson::salesperson()
{
	no_of_item=0;
	com_per_item=0;
}
salesperson::salesperson(int a, const char* b, int c, int d, int e, int f, int g, int h, int i):wagEmployee(a,b,c,d,e,f,g)
{
	no_of_item= h;
	com_per_item =i;
}
float salesperson::getSalary()
{
	return wagEmployee::getSalary()+ no_of_item*com_per_item;
}
void salesperson::Display()
{
	wagEmployee::Display();
	cout<<no_of_item<<endl;
	cout<<com_per_item<<endl;	
}
