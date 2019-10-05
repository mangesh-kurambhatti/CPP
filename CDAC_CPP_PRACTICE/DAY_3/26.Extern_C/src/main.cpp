//============================================================================
// Name        : Extern_C.cpp
// Author      : Mangesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "../includes/fun.h"

int MenuChoice();

int main()
{
	int no1, no2, ans, choice;

	do
	{
		cout<<"Enter No1 :: ";
		cin>>no1;

		cout<<"Enter No2 :: ";
		cin>>no2;


		choice= MenuChoice();

		switch(choice)
		{
			default:
					cout<<"invalid case "<<endl;
					continue;
			case 1: // sum
					ans= sum(no1, no2);
					cout<<"ans ="<<ans<<endl;
					break;
			case 2: // minus
					ans= sub(no1, no2);
					cout<<"ans ="<<ans<<endl;
					break;

			case 3: // minus
					ans= mul(no1, no2);
					cout<<"ans ="<<ans<<endl;
					break;
			case 0:
					return 0;
		}

		cout<<"Enter 1 to Continue or 0 to Exit";
		cin>> choice;

	}while(choice!=0);

	return 0;
}
int MenuChoice()
{
	int choice;
	cout<<"\n 1. Sum \n 2. SubStract \n 3.Mulitply \n 0. Exit "<<endl;
	cout<<"Enter Your Choice ::";
	cin>>choice;
	return choice;
}
