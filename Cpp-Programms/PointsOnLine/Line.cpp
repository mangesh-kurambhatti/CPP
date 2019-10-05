#include<iostream>
#include "Line.h"

Line::Line():x1(0),x2(0),y1(0),y2(0)
{
/*	this->x1=x1;
	this->x2=x2;
	this->y1=y1;
	this->y2=y2;
*/
}

int Line::GetX1()
{
	return x1;
}

int Line::GetX2()
{
	return x2;
}

int Line::GetY1()
{
	return y1;
}

int Line::GetY2()
{
	return y2;
}

void Line::SetX1(int x1)
{
	this->x1=x1;
}

void Line::SetX2(int x2)
{
	this->x2=x2;
}

void Line::SetY1(int y1)
{
	this->y1=y1;
}

void Line::SetY2(int y2)
{
	this->y2=y2;
}

void Line::LieOnXaxis(int x1,int y1)
{
	if(x1!=0 && y1==0)
	{
		std::cout<<"\n Point lies on X-axis"<<std::endl;	
	}
	else
	{
		std::cout<<"\n Point Do not lie on X-axis"<<std::endl;
	}
}

void Line::LieOnYaxis(int x1,int y1)
{
	if(x1==0 && y1!=0)
	{
		std::cout<<"\n Point Lies on Y-axis"<<std::endl;
	}
	else
	{
		std::cout<<"\n Point do Not Lie on Y-axis"<<std::endl;
	}
}

void Line::ParallelToXaxis(int x1,int x2,int y1,int y2)
{

	if(y1==y2)
	{

		std::cout<<"\n Line is Parallel to x-axis"<<std::endl;

	}
	else
	{
		std::cout<<"\n Line is not parallel to X-axis"<<std::endl;
	}
	/*if(y1==0 && y2==0)
	{
			std::cout<<"\n Line is parallel to x-axis and that line itself is X-axis"<<std::endl;
	}
	else if((y1>0)==1 && (y2>0)==1)
	{
			std::cout<<"\n parallel to x-axis and it is above the X-axis"<<std::endl;
	}
	else if((y1<0)==1 && (y2<0)==1)
	{
			std::cout<<"\n Line is parallel to x-axis and it is below the X-axis"<<std::endl;
	}	
	else
	{
		std::cout<<"\n Line is not parallel to x-axis"<<std::endl;
	}*/

}

void Line::ParallelToYaxis(int x1,int y1,int x2,int y2)
{
	if(x1==x2)
	{
		std::cout<<"\n Line is Parallel to Y-axis"<<std::endl;
	}
	else
	{
		std::cout<<"\n Line is Not Parallel to Y-axis"<<std::endl;
	}

}


int main()
{
	Line l1,l2;

	int n1,n2,m1,m2;

	std::cout<<"\n Enter the x1 of  x-axis cordinate"<<std::endl;
	std::cin>>n1;
	
	std::cout<<"Enter the y1 of y-axis cordinate"<<std::endl;
	std::cin>>n2;
// checking whether point lies on x or y axis
	l1.SetX1(n1);
	l1.SetX2(n2);
	l1.LieOnXaxis(n1,n2);
    l1.LieOnYaxis(n1,n2);

/*  End of Checking that whether the point lies on x or y axis*/

// checking line parallel to x-axis and Y-axis

	std::cout<<"\n****Checking Line Parallel to X or Y axis****\n"<<std::endl;	

	std::cout<<"\n Enter the x1 of  x-axis cordinate"<<std::endl;
	std::cin>>n1;
	
	std::cout<<"Enter the y1 of y-axis cordinate"<<std::endl;
	std::cin>>n2;

	std::cout<<"\n Enter the x2 of  x-axis cordinate"<<std::endl;
	std::cin>>m1;
	
	std::cout<<"Enter the y2 of y-axis cordinate"<<std::endl;
	std::cin>>m2;

	l2.ParallelToXaxis(n1,n2,m1,m2);
	l2.ParallelToYaxis(n1,n2,m1,m2);

	return 0;
}
