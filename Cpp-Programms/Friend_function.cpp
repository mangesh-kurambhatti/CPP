#include<iostream>

using namespace std;


class Base
{

	int i;
	
	public:
	Base(int x)
	{
		i=x;
		//cout<<"i="<<i;
	}
	/*void demo()
	{
		i=20;

		cout<<"\n B:"<<i;
	}*/
	friend void print(Base);	 
};

void print(Base b)
{
	

	cout<<"B : "<<b.i;

}
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
	Base c(30),*b;
	//cout<<"i="<<c.i;	
	print(c);
//	c.demo();
return 0;
}
