/*
 * shallow_copy.cpp
 *
 *  Created on: 09-Mar-2019
 *      Author: sunbeam
 */
#include<iostream>
using namespace std;

class Array{
private:
	int size;
	int *arr;

public:
	Array(void)
	{
		this->size=0;
		this->arr=NULL;
	}
	Array(int size)
	{

		this->size=size;
		this->arr=new int[this->size];
	}

	void AcceptRecord()
	{
		cout<<"Enter the records::"<<endl;
		for(int i=0;i<this->size;i++)
			cin>>this->arr[i];
	}
	void PrintRecord()
	{
		cout<<"Records ARE::"<<endl;
		for(int i=0;i<this->size;i++)
					cout<<this->arr[i]<<endl;
	}


	~Array()
	{

		delete[] this->arr;
	}
};


int main()
{
	Array a1(3);

	a1.AcceptRecord();
	a1.PrintRecord();
	return 0;
}



