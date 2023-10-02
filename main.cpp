#include<iostream>
#include"salesperson.h"
using namespace std;

int main()
{
	
	float s1;
	salesperson p2(123, "Rajesh", 20,12,2000,10,20,14,12);
	p2.Display();
	s1=p2.getSalary();
	cout<<"salesperson salary : "<<s1<<endl;
	
	Employee *eptr;
	wagEmployee we1;
	
	eptr= &we1;
	eptr->Display();	


	return 0;
}
