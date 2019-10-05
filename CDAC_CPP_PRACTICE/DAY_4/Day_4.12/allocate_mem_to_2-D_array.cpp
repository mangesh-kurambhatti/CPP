/*
 * allocate_mem_to_2-D_array.cpp
 *
 *  Created on: 07-Mar-2019
 *      Author: sunbeam
 */
#include<cstdlib>
#include<iostream>
using namespace std;

int main()
{
	int **ptr=new int*[2];
	for(int i=0;i<2;i++)
		ptr[i]=(int*)malloc(3*sizeof(int));

	for(int i=0;i<2;i++)
		delete[] ptr[i];
	delete[] ptr;

	return 0;
}
int main1()
{

	int **ptr=(int **)malloc(2*sizeof(int*));
	if(ptr != NULL)
	{
 		for(int i=0;i<2;i++)
			ptr[i]=(int*)malloc(3*sizeof(int));
	}

	for(int i=0;i<2;i++)
		free(ptr[i]);
	free(ptr);

	return 0;
}



