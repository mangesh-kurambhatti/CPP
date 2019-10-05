/*
 * swap_using_template.cpp
 *
 *  Created on: 13-Mar-2019
 *      Author: sunbeam
 */
#include<iostream>

using namespace std;
template<typename T,typename X> //T-type parameter
void my_swap(T &no1,X &no2) //X- type parameter
{
	T temp=no1;
	no1=no2;
	no2=temp;
}
int main()
{
	 float no1=3.14f;
	 double no2=9.18;

	 my_swap<float,double>(no1,no2); //<float,double> type argument

	cout<<"No 1	:	"<<no1<<endl;
	cout<<"No 2	:	"<<no2<<endl;
return 0;
}



