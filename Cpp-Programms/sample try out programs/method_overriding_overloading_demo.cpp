#include<iostream>

class A
{
	public:
	
	void f1()
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
	B obj;

	obj.f1();//B class method get invoked
	//obj.f2();//will give error
	obj.f2(4);//B class method get invoked
return 0;
}
