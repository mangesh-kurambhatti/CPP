#include<iostream>

using namespace std;

class A{
private:
	int x=10;
protected:
	int y=20;
public:
	int z=30;

	friend class B;	 
};

class B : public A
{
	public:

	void print()
	{
		//cout<<"Value of X is :::"<<x<<endl;
		cout<<"Value of Y is :::"<<y<<endl;
		cout<<"Value of Z is :::"<<z<<endl;
	}
	
	void show()
	{
		cout<<"Value of X using frined fun is::"<<x<<endl;
	}
};

class C: public B
{
public:
	void print()
	{
	//	cout<<"Value of X is :::"<<x<<endl;
		cout<<"Value of Y is :::"<<y<<endl;
		cout<<"Value of Z is :::"<<z<<endl;
	}
};
int main()
{
	B b;
	b.print();
	b.show();

	C c;
	c.print();
	
return 0;		
}
