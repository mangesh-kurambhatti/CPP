/*
 * checking_malloc_returning_null_and_new_return_bad_alloc.cpp
 *
 *  Created on: 07-Mar-2019
 *      Author: sunbeam
 */
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
		try
		{
			int a=10000000000000000000000;

			int *ptr=new int[a];

			delete[] ptr;
		}
		catch(bad_alloc ex)
		{
			cout<<ex.what()<<endl;
		}
	return 0;
}



int main1()
{
	int a=10000000000000000000000;

	int *ptr=(int *)malloc(a*sizeof(int));

	if(ptr != NULL)
	{
		cout<<"No memrory shortage."<<endl;

	}
	else
	{

		cout<<"NULL";
	}
return 0;
}


