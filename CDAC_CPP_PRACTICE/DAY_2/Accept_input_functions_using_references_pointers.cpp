#include<iostream>
using namespace std;

//void AcceptInput(int *ptr);
//void PrintOutput(const int * ptr);

void AcceptInput(int &ptr);
void PrintOutput(const int &ptr);


int main()
{
	int no1;

	 //AcceptInput(&no1);
	 //PrintOutput(&no1);
		

    	AcceptInput(no1);
	 PrintOutput(no1);

return 0;
}

/*
void AcceptInput(int *ptr)
{
	cout<<"Enter *ptr::\n";
	cin>>*ptr;
}

void PrintOutput(const int * ptr)
{
	cout<<"*ptr::"<<*ptr<<endl;
	return;

}
*/
void AcceptInput(int &ptr)
{
	cout<<"Enter ptr::";
	cin>>ptr;
}
void PrintOutput(const int &ptr)
{
	cout<<"ptr ::"<<ptr<<endl;
}

