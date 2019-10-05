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
			void AcceptInputFromConsole();
			void PrintOutputFromConsole();
			void  SetReal(int real);
			void SetImag(int imag);
			int GetReal();
			int GetImag();
			Complex(); // decl of parameterless ctor
			Complex(int real, int imag); //decl of parameterized ctor
			~Complex();

	};//end of class;

void Complex::AcceptInputFromConsole()
			{
				cout<<"\n Enter the Real::";
				cin>>this->real;
			
				cout<<"\n Enter the Imag::";
				cin>>this->imag;
			}

			void Complex::PrintOutputFromConsole()
			{
			cout<<"this->real::"<<this->real<<"\t ["<<&this->real<<" ]"<<endl;

			cout<<"this->Imag::"<<this->imag<<"\t ["<<&this->imag<<" ]"<<endl;
			}

			void Complex::SetImag(int imag)
			{

				this->imag=imag;
			}

			void Complex::SetReal(int real)
			{
				this->real=real;
			}
			
			int Complex::GetReal()
			{
				return this->real;
			}

			int Complex::GetImag()
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

			Complex::Complex(int real=1000,int imag=2000)
			{
				this->real=real;
				this->imag=imag;
				cout<<"\n :::Inside pArameterized COnstructor with default arguments:::::"<<endl;
			}

			Complex::~Complex()
			{
				cout<<"=================="<<endl;
				this->PrintOutputFromConsole();
				this->real=0;
				this->imag=0;

				cout<<"Inside DESTRUCTOR of Complex Class"<<endl;
			}

}//end of NAMESPACE

using namespace NComplex;
int main(void)
{

int real,imag;

/*	Complex c1;
		cout<<"\nC1::"<<endl;
	c1.PrintOutputFromConsole();	
*/	
	Complex c2(500,600);

	cout<<"\nC1::"<<endl;
	c2.PrintOutputFromConsole();	


	
	cout<<"Enter the Real";
	cin>>real;
	c2.SetReal(real);
	cout<<"Enter the Imag";
	cin>>imag;
	c2.SetImag(imag);


	real=c2.GetReal();

	imag=c2.GetImag();

	cout<<"C1::"<<endl;

	cout<<"Real of C1 ::"<<real<<endl;
	cout<<"Imag of C2 ::"<<imag<<endl;

	c2.PrintOutputFromConsole();
	
return 0;
}
