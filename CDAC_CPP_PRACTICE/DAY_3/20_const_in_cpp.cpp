#include<iostream>
using namespace std;
int main(void)
{
	const float pi=3.142;
	//float *ptr=&pi; not allowed in cpp as value of pointer is not const
	//float *ptr=&pi; in c allowed
	const float *ptr=&pi;

	cout<<" *ptr="<<*ptr<<endl;
		
	ptr=3.52; //not allowed as value of pointer is const
	cout<<" *ptr="<<*ptr<<endl;

	return 0;

}
