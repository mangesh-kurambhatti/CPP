#include<iostream>
#include "Date.h"


inline std::ostream& operator<<(std::ostream& os,const Date& dt)
{
	os<<"Overloaded :-"<<dt.GetDate()<<":"<<dt.GetMonth()<<":"<<dt.GetYear()<<std::endl;
	return os;
}

inline std::istream& operator>>(std::istream& is,Date& dt)
{
	int dd,mm,yy;
	std::cout<<"Enter the Date,Month & Year:-";
	is>>dd;
	dt.SetDate(dd);
	is>>mm;
	dt.SetMonth(mm);
	is>>yy;
	dt.SetYear(yy);
	return is;
}

Date::Date():dd(1),mm(1),yy(1980)
{}

Date::Date(int d,int m,int y):dd(d),mm(m),yy(y)
{

}

void Date::SetDate(const int d)
{
	dd=d;
}

void Date::SetMonth(const int m)
{
	mm=m;
}

void Date::SetYear(const int y)
{
	yy=y;
}

int Date::GetDate()const
{
	return dd;
}

int Date::GetMonth()const
{
	return mm;
}

int Date::GetYear()const
{
	return yy;
}

Date Date::operator+(const int d)
{
	Date temp;
	temp.dd=this->dd+d;
	temp.mm=this->mm;
	temp.yy=this->yy;

	std::cout<<"Returning temp :-"<<temp.dd<<std::endl;
	return temp;
}

bool Date::operator==(const Date& obj)const
{
	return this->dd==obj.dd && this->mm==obj.mm && this->yy ==obj.yy;
}

Date Date::operator=(const Date& obj)
{
	this->dd=obj.dd;
	this->mm=obj.mm;
	this->yy=obj.yy;

	return *this;
}

bool Date::operator<(const Date& obj)const
{
	return this->dd<obj.dd && this->mm < obj.mm && this->yy <  obj.yy;
}

Date& Date::operator++()
{
	std::cout<<"Pre\n";
	this->dd++;
	return *this;
}

Date Date::operator++(int)
{
	std::cout<<"Post \n";
	Date temp(this->dd,this->mm,this->yy);
	this->dd++;
	return temp;
}

Date& Date::operator--()
{
	this->dd--;
	return *this;
}

bool Date::operator!=(const Date&obj) const
{
	return this->dd != obj.dd || this -> mm != obj.mm
||this->yy != obj.yy;
}

Date operator+(int n ,Date& dt)
{
	return dt+n;
}

int main()
{
	Date dt,dt1;
	int i,j;
	std::cin>>i>>j;
	std::cin>>dt>>dt1;
	std::cout<<dt;

	dt=dt+10;
	dt=10+dt;

	std::cout<<dt;
}
