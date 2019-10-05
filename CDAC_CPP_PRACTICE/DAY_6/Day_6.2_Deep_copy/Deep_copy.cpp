

/*
 * shallow_copy.cpp
 *
 *  Created on: 09-Mar-2019
 *      Author: sunbeam
 */
#include<iostream>
using namespace std;
//dont run this project from here run it from terminal
//from ~/Mangesh/c++_first_revision/CDAC_CPP_PRACTICE/DAY_6/Day_6.2_Deep_copy folder

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

	Array(const Array &other)
	{
		this->size=other.size;
		this->arr=new int[this->size];
		for(int i=0;i<this->size;i++)
			this->arr[i]=other.arr[i];

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

	Array a2=a1;

	a1.PrintRecord();
	return 0;
}



