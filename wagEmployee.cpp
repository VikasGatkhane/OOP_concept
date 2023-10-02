#include<iostream>
#include"wagEmployee.h"
#include<cstring>
using namespace std;
wagEmployee::wagEmployee()
{
	hours=0;
	rate=0;
}
wagEmployee::wagEmployee(int a, const char* b, int c, int d, int e, int f, int g):Employee(a, b,c,d,e)  //base initialization list
{
	// empid=a;   //not possible due to it is inherited 
	//strcpy(name, b);
	hours=f;
	rate=g;
}
void wagEmployee::Display()
{
	
	Employee::Display();	
	cout<<hours<<endl;
	cout<<rate<<endl;
	cout<<"wagEmployee salary is : "<<hours*rate<<endl;
	
}
float wagEmployee::getSalary()
{
	return hours*rate;
}
