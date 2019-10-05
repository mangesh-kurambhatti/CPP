/*
 * Copy_ctor.cpp
 *
 *  Created on: 08-Mar-2019
 *      Author: sunbeam
 */
#include<iostream>

using namespace std;

class Complex
{
private:

	int Real;
	int Imag;
public:
	Complex(int real=0,int imag=0):Real(real),Imag(imag)
	{}

	Complex(const Complex &other)
	{
		this->Imag=other.Real;
		this->Real=other.Real;
	}
	void Print()
	{
		cout<<"Real===>"<<this->Real<<endl;

		cout<<"Imag===>"<<this->Imag<<endl;

	}

	Complex sum(Complex other)
	{
		Complex result;

		result.Imag=this->Imag+other.Imag;
		result.Real=this->Real+other.Real;

		return result;
	}
};

int main()
{
	Complex c1(10,20);
	c1.Print();

	cout<<"================="<<endl;

	//Complex c2(100,200);
	//c2.Print();

	Complex c2=c1;
	Complex c3;
	c3=c1.sum(c2);
	c3.Print();
	return 0;
}

