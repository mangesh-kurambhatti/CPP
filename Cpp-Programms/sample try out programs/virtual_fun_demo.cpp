#include<iostream>

class A
{
	public:
	
    virtual	void f1()
	{
		std::cout<<"\nin A's f1";
	}
	void f2()
	{
		std::cout<<"\nin A's f2";
	}
};

class B
{
	public:
	
	void f1()    //method overloading
	{
		std::cout<<"\nin B's f1";
	}

	void f2(int x)  //method overriding
	{
		std::cout<<"\nin B's f2";
	}
};

int main()
{
	A o1;
	B o2;

	A *p=&o2;

	//o2.f1();
	p->f1();
	return 0;
}
