/*
 * upcasting_downcasting.cpp
 *
 *  Created on: 12-Mar-2019
 *      Author: sunbeam
 */
#include<iostream>

using namespace std;

class Base
{
private:
	int num1;
	int num2;
public:
	Base( void )
	{
		cout<<"	Base( void )"<<endl;
		this->num1 = 10;
		this->num2 = 20;
	}
	Base( int num1, int num2 )
	{
		cout<<"Base( int num1, int num2 )"<<endl;
		this->num1 = num1;
		this->num2 = num2;
	}
	void showRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
	void printRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}

};

class Derived : public Base
{
private:
	int num3;
public:
	Derived( void )
	{
		cout<<"Derived( void )"<<endl;
		this->num3 = 30;
	}
	Derived( int num1, int num2, int num3 ) : Base(num1, num2)
	{

		this->num3 = num3;
	}
	void printRecord( void )
	{
		Base::printRecord();
		cout<<"Num3	:	"<<this->num3<<endl;
	}
	void displayRecord( void )
	{
		Base::showRecord();
		cout<<"Num3	:	"<<this->num3<<endl;
	}
};

int main1()
{
	Base base;
	base.printRecord();//Base
	base.showRecord();//Base
	//base.Derived::printRecord();//error
	//base.displayRecords();
	return 0;
}

int main2()
{
	Base *ptr=new Base();

	ptr->printRecord();
	ptr->showRecord();

	//ptr->Derived::printRecord();
	//ptr->Derived::displayRecord();
	//	ptr->displayRecord;
	delete ptr;

return 0;
}

int main3()
{
	Base b1;
	Base &b2=b1; //Base * const b2=&b1;
	b2.printRecord();
	b2.showRecord();
	//b2.Derived::displayRecord();
	//b2.Derived::printRecord();

		return 0;
}

int main4()
{
	Derived d;
	d.displayRecord();
	d.printRecord();
	d.showRecord();
	d.Base::printRecord();
return 0;
}


int main5()
{
	Derived *ptr=new Derived;

	ptr->displayRecord();
	ptr->printRecord();
	ptr->showRecord();
	ptr->Base::printRecord();

return 0;
}

int main6()
{
	Derived d1;
	Derived &d2 = d1 ; //Derived * const d2=&d1;

	d2.displayRecord();
	d2.printRecord();
	d2.showRecord();

	d2.Base::printRecord();
}

int main7()
{
	Base b1(100,200);
	Base b2 = b1;	//Initialization
	b2.printRecord();	//Base::printRecord
	return 0;
}

int main8()
{
	Base b1(100,200),b2;
	b2 = b1;	//Assignment
	b2.printRecord();	//Base::printRecord
	return 0;
}

int main9()
{
	Derived d1(500,600,700);
	Derived d2 = d1;	//Initialization
	d2.printRecord();	//Derived::printRecord

	return 0;
}

int main10()
{
	Derived d1(500,600,700),d2;
		d2 = d1;	//Assignment
		d2.printRecord();	//Derived::printRecord
		return 0;
}

int main11()
{
	Base base;
	Derived derived( 500,600,700);
	base = derived;	//OK : Object Slicing
	base.printRecord();	//Base::printRecord --> 500,600


	return 0;
}

int main12()
{
	Derived *ptr=new Derived();

	ptr->printRecord(); //Derived::PrintRecord()

	cout<<""<<endl;

	Base *ptrBase = ptr; //upcasting

	ptrBase->printRecord();

	delete ptrBase;

	return 0;
}

int main13()
{
	Base *basePtr=new Derived();
	basePtr->printRecord();

	Derived *ptrDerived=(Derived*)basePtr;

	ptrDerived->printRecord();
return 0;
}

int main14()
{
	Derived d1;
	Derived &d2=d1;

	d2.displayRecord();
	d2.printRecord();

	Base &b1= d2;

	b1.printRecord();
	return 0;
}
