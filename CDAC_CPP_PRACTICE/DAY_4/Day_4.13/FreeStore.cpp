/*
 * FreeStore.cpp
 *
 *  Created on: 07-Mar-2019
 *      Author: sunbeam
 */
#include<iostream>

using namespace std;

int main()
{
	char name[30];

	cout<<"Enter the Name::"<<endl;
	cin>>name;

	int *ptr=new (name)int(122);
		cout<<"Value of ptr="<<*ptr<<endl;
		for(int i=0;i<10;i++)
			cout<<"Name is ::"<<name[i]<<endl;

return 0;
}



