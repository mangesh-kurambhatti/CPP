#include<iostream>
#include<stdlib.h>
using namespace std;

class ComplexNo

{
public:

	int RealPart,ImaginaryPart;

	void getData();
	void putData();
	void Display();

	ComplexNo operator+(ComplexNo c1)
	{
	ComplexNo c2;
	c2.RealPart=RealPart+c1.RealPart;
	c2.ImaginaryPart=ImaginaryPart+c1.ImaginaryPart;

	return c2;	
	}

	ComplexNo operator
};


void ComplexNo::getData()
{
	cout<<"\n Enter the real part :";
	cin>>RealPart;
	
	cout<<"\n Enter the Imaginary Part :";
	cin>>ImaginaryPart;
}

void ComplexNo::Display()
{
	cout<<RealPart<<"+"<<ImaginaryPart<<"i"<<"\n"<<endl;
}


int main()
{
	ComplexNo c3,c4,c5;
	c3.getData();
	c4.getData();

	c5=c3+c4;
	cout<<"\nAddition is :"<<endl;
	c5.Display();
return 0;
}
