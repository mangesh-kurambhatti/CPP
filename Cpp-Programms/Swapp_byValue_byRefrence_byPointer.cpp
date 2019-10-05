#include<iostream>

int SwapByValue(int x,int y)
{
	int temp=x;
		x=y;
		y=temp;

return temp;	
}

int SwapByRefrence(int &a,int &b)
{
	int temp=a;
		a=b;
		b=temp;

//return temp;

}

int SwapByPointer(int *no1,int *no2)
{
	int temp=*no1;
	*no1=*no2;
	*no2=temp;
}


int main()
{
	int no1=10,no2=20;

	std::cout<<"\nOriginal no are :"<<no1<<":"<<no2;
	SwapByValue(no1,no2);
	std::cout<<"\nValues After Swapping are :"<<no1<<":"<<no2;

	std::cout<<"\nOriginal nos before swapping using refrence  are :"<<no1<<":"<<no2;
	SwapByRefrence(no1,no2);
	std::cout<<"Values After Swapping are :"<<no1<<":"<<no2;

	std::cout<<"\nOriginal nos before swapping using pointer are :"<<no1<<":"<<no2;
	SwapByPointer(&no1,&no2);
	std::cout<<"\nValues After Swapping are :"<<no1<<":"<<no2;

}
