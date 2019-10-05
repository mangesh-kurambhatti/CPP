#include<iostream>

using namespace std;

class Base
{
	private: 
	
	int a=10;
	
	public:
	int j=a;
	int getData()
	{
		return a;
	}

	void setData(int x)
	{
		a=x;
	}


};

class Derived:public Base
{
	public:

		int fun()
		{
			cout<<"Print Hello";
		}

};


int main()
{
	Derived d;
	Base b;
	d.setData(20);
	int c=d.getData();

	cout<<"Data is :"<<b.j;

return 0;

}
