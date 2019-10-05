#include "Date.h"
#include<iostream>

inline std::ostream& operator<<(std::ostream& os,const Date& dt)
{
	os<<"Overloade:-"<<dt.GetDD()<<":"<<dt.GetMM()<<":"<<dt.GetYY()<<std::endl;

	return os;
}

inline std::istream& operator>>(std::istream& is,Date& dt)
{
	int dd,mm,yy;
	std::cout<<"Enter Data,Month & Year :-";
	is>>dd;
	dt.SetDD(dd);
	is>>mm;
	dt.SetMM(mm);
	is>>yy;
	dt.SetYY(yy);

}
void SimulateExplicitAndConversionFunction()
{
	Date dt(10,10,2010);
	std::cout<<dt;

	dt=20;
	dt=30;
	std::cout<<dt;

	int k=dt;
	std::cout<<"Conversion Function :-"<<k<<std::endl;
	SpecialDate sdate=dt;

}

int main()
{
	SimulateExplicitAndConversionFunction();
}
