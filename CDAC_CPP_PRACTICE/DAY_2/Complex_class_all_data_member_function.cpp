#include<iostream>
using namespace std;

namespace NComplex
{
class Complex
{
	private:
		int real;
		int imag;

	public:	
		
			void AcceptInputFromConsole()
			{
				cout<<"\n Enter the Real::";
				cin>>this->real;
			
				cout<<"\n Enter the Imag::";
				cin>>this->imag;
			}

			void PrintOutputFromConsole()
			{
			cout<<"this->real::"<<this->real<<"\t ["<<&this->real<<" ]"<<endl;

			cout<<"this->Imag::"<<this->imag<<"\t ["<<&this->imag<<" ]"<<endl;
			}

			void SetImag(int imag)
			{

				this->imag=imag;
			}

			void SetReal(int real)
			{
				this->real=real;
			}
			
			int GetReal()
			{
				return this->real;
			}

			int GetImag()
			{
				return this->imag;
			}


			//parameterless constructore it is not default constructor
/*
			Complex()
			{
				this->real=10;
				this->imag=20;
				cout<<"\n Inside pArameterless COnstructor"<<endl;
			}
*//*
			Complex(int real,int imag)
			{
				this->real=real;
				this->imag=imag;
				cout<<"\n Inside pArameterized COnstructor"<<endl;
			}
*/

			Complex(int real=1000,int imag=2000)
			{
				this->real=real;
				this->imag=imag;
				cout<<"\n :::Inside pArameterized COnstructor with default arguments:::::"<<endl;
			}

			~Complex()
			{
				cout<<"=================="<<endl;
				this->PrintOutputFromConsole();
				this->real=0;
				this->imag=0;

				cout<<"Inside DESTRUCTOR of Complex Class"<<endl;
			}
};//end of class

}//end of NAMESPACE

using namespace NComplex;
int main(void)
{
	Complex c1;
	int real,imag;
	cout<<"\nC1::"<<endl;
	c1.PrintOutputFromConsole();	
	
	Complex c2(500,600);

	cout<<"\nC1::"<<endl;
	c2.PrintOutputFromConsole();	


	Complex c3;
	cout<<"\nC1::"<<endl;
	c3.PrintOutputFromConsole();	

	cout<<"\nC1::"<<endl;
	c2.PrintOutputFromConsole();	
	c1.AcceptInputFromConsole();
	c1.PrintOutputFromConsole();	

	cout<<"Enter the Real";
	cin>>real;
	c1.SetReal(real);
	cout<<"Enter the Imag";
	cin>>imag;
	c1.SetImag(imag);


	real=c1.GetReal();

	imag=c1.GetImag();

	cout<<"C1::"<<endl;

	cout<<"Real of C1 ::"<<real<<endl;
	cout<<"Imag of C2 ::"<<imag<<endl;

	c1.PrintOutputFromConsole();
	
return 0;
}
