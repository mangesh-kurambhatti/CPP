#include<iostream>

int Multiply(int a,int b=1,int c=1,int d=1,int e=1)
{

	return a*b*c*d*e;
		
}


int main()
{
	std::cout<<"\n For 1 nos:"<<Multiply(2)<<std::endl;
	std::cout<<"\n For 2 nos:"<<Multiply(2,3)<<std::endl;
	std::cout<<"\n For 3 nos:"<<Multiply(2,3,4)<<std::endl;
	std::cout<<"\n For 4 nos:"<<Multiply(2,3,4,5)<<std::endl;
	std::cout<<"\n For 5 nos:"<<Multiply(2,3,4,5,6)<<std::endl;
	

}
