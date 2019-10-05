#include<iostream>

using namespace std;

namespace NConstDemo
{
	class ConstDemo
	{
		private:
				const int a;
				const int b;
				int c;
				mutable int d;

		public:

			ConstDemo():a(10),b(20),c(30),d(40)
			{
				this->c=c;
				this->d=d;				
			}
		
			ConstDemo(int a, int b, int c, int d):a(a),b(b), c(c),d(d)
			{
				this->c=c;
				this->d=d;
			}
			void Print()const
			{

				this->d=4000;
				cout<<"this->c="<<this->c<<endl;
				cout<<"this->d="<<this->d<<endl;
			}

			void Display()
			{
				this->c=1000;
				this->d=3000;

				cout<<"this->a="<<this->a<<endl;

				cout<<"this->b="<<this->b<<endl;

				cout<<"this->c="<<this->c<<endl;

				cout<<"this->d="<<this->d<<endl;
			}

			~ConstDemo()
			{
				//this->a=0; constant hence can't modify or assign anything
				//this->b=0;
				this->c=0;
				this->d=0;
			}
	};//end of class 
}//end of namespace

using namespace NConstDemo;

int main()
{
	
	ConstDemo c1;

	cout<<"Size of C1="<<sizeof(c1)<<endl;

	cout<<"\n*************************\n"<<endl;
	cout<<"\nPARAMETER LESS CONSTRUCTOR\n";
	cout<<"C1::Print()"<<endl;

	c1.Print();

	cout<<"C1::Display()"<<endl;

	c1.Display();

	cout<<"\n*************************"<<endl;
	cout<<"\nPARAMETERISED CONSTRUCTOR\n";
	ConstDemo c2(100,200,300,400);

	cout<<"Size of C1="<<sizeof(c2)<<endl;

	cout<<"C1::Print()"<<endl;

	c2.Print();

	cout<<"C1::Display()"<<endl;

	c2.Display();


	const ConstDemo c3; //constant object


	cout<<"size of c3="<<sizeof(c3)<<endl;
	cout<<"C3::"<<endl;

	cout<<"C3::Print()"<<endl;
	c3.Print();
	cout<<"C3::Display()"<<endl;
//	c3.Display();
return 0;
}
