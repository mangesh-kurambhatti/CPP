/*
 * fun_ptr_in_c_late_binding.cpp
 *
 *  Created on: 13-Mar-2019
 *      Author: sunbeam
 */

#include<iostream>
using namespace std;

int sum(int num1,int num2)
{
	int result= num1+num2;
	return result;
}


int sub(int num1,int num2)
{
	int result=num1-num2;
	return result;
}

int menu_choice()
{
	int choice;

	cout<<"0.Exit"<<endl;
	cout<<"1.Sum"<<endl;
	cout<<"2.Sub"<<endl;

	cout<<"Enter Your Choice ::"<<endl;
	cin>>choice;

	return choice;
}

int main()
{
	int choice;
	while(	(choice=::menu_choice()) != 0 )
	{

		int (*ptr)(int,int)=NULL;//late binding can be achieved here using c
		switch(choice)
		{
		case 1:
			ptr=sum;
			break;
		case 2:
			ptr=sub;
			break;
		case 0:
				return 0;
		}
		if(ptr != NULL)
		{
			int result=ptr(100,200);
			cout<<"Result is:"<<result<<endl;
		}
	}

return 0;
}
