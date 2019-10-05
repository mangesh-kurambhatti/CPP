#include "Date.h"
#include<iostream>

Date::Date()
{
	std::cout<<"\n Defualt Constructor";
}

Date::Date(int d):dd(d)
{
	std::cout<<"Single Parameter Constructor \n";
}

Date::Date(int d,int m,int y):dd(d),mm(m),yy(y)
{
	std::cout<<"parameterized Constuctor\n";
}

void Date::SetDD(const int dd)
{
	this->dd=dd;

}

void Date::SetMM(const int mm)
{
	this->mm=mm;
}

void Date::SetYY(const int yy)
{
	this->yy=yy;
}

int Date::GetDD()const
{
	return dd;
}

int Date::GetMM()const
{
	return mm;
}

int Date::GetYY()const
{
	return yy;
}

SpecialDate::SpecialDate(int d,int m):dd(d),mm(m)
{

}

Date::operator int()
{
	return this->dd;
}


Date::operator SpecialDate()
{
	SpecialDate s1(this->dd,this->yy);
	return s1;
}
