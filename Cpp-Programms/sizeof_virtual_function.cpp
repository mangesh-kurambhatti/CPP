#include<iostream>

using namespace std;


class Base
{
public:
	int i;
	
	 virtual int BaseFunction()
	{
		cout<<"Hello \n";
	}

};

class Derived : public Base
{
	public:
	int i;
	
	/*int BaseFunction()
	{
		cout<<"Bye \n";
	}*/
	
};	
int main()
{
	Base c,*b;
	Derived d;
	b=&d;
	b->BaseFunction();
	b->BaseFunction();
	cout<<"size is :"<<sizeof(d);	
}
