//============================================================================
// Name        : 18_Exception_class.cpp
// Author      : Mangesh
// Version     :
// Copyright   : Your copyright notice
// Description : Our own exception handling, Ansi-style
//============================================================================
#include<cstring>
#include <iostream>
using namespace std;


class Exception{

	private:
				int lineno;
				char errmsg[40];
	public:

				Exception(const int lineno,const char * errmsg)
				{
						this->lineno=lineno;
						strcpy(this->errmsg,errmsg);
				}

				void PrintErrorInfo()
				{
					cout<<"\nLine no::"<<lineno<<endl;
					cout<<"ERROR MSG::"<<errmsg<<endl;
					cout<<"FILE NAME::"<<__FILE__<<endl;
					cout<<"DATE::"<<__DATE__<<endl;
					cout<<"TIME::"<<__TIME__<<endl;
				}
				~Exception()
				{
					this->lineno=0;
					strcpy(errmsg,"");

				}
};

int main() {

	//Exception ex( __LINE__+17,"ERDIVIDE BY ZERO");
	int no1,no2;
	try
	{
		cout<<"Enter the 1st No::"<<endl;
		cin>>no1;
		cout<<"Enter the 2nd No::"<<endl;
		cin>>no2;

		if(no2==0)
		{

			throw Exception( __LINE__+5," ERROR::DIVIDE BY ZERO");;
		}

		else
		{
			int result=no1/no2;
			cout<<"\n Result is ::"<<result;
		}
	}
	catch(Exception &e)
	{
		cout<<"\nInside Exception catch::";
		e.PrintErrorInfo();

	}
	return 0;
}
