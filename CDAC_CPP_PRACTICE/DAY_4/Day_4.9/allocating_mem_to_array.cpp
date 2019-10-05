/*
 * allocating_mem_to_array.cpp
 *
 *  Created on: 07-Mar-2019
 *      Author: sunbeam
 */

#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{

	int *ptr=new int[3];

	cout<<"Size of ptr ="<<sizeof(ptr)<<endl;

	ptr[0]=100;

	cout<<"Ptr[0]="<<ptr[0]<<endl;

	cout<<"Enter the 3 no::"<<endl;
	for(int i=0;i<3;i++)
		cin>>ptr[i];
	cout<<"\n=================="<<endl;
	for(int i=0;i<3;i++)
			cout<<ptr[i]<<endl;

delete[] ptr;
return 0;


}


