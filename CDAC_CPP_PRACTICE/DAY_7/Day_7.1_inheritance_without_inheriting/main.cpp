/*
 * main.cpp
 *
 *  Created on: 11-Mar-2019
 *      Author: sunbeam
 */
#include<iostream>
#include<string>

using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date(void)
	{
		this->day=0;
		this->month=0;
		this->year=0;
	}

	Date(int day,int month,int year):day(day),month(month),year(year)
	{
		cout<<"Date(int day,int month,int year):day(day),month(month),year(year)"<<endl;
	}

	void AcceptRecord(void)
	{
		cout<<"Day	:	";
		cin>>this->day;
		cout<<"Month	:";
		cin>>this->month;
		cout<<"Year	:	";
		cin>>this->year;
	}

	void PrintRecord(void)
	{
		cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
	}

};

class Employee{
private :
	string name;
	int empid;
	float salary;
	Date JoinDate;
public:

	Employee(void)
	{
		cout<<"Employee(void)"<<endl;
		this->name="";
		this->empid=0;
		this->salary=0.0;
		//this->JoinDate=0;
	}
	Employee(string name,int empid,float salary,Date JoinDate):name(name),empid(empid),salary(salary),JoinDate(JoinDate)
		{
			cout<<"	Employee(void)"<<endl;

		}

	Employee(string name,int empid,float salary,int day,int month,int year):name(name),empid(empid),salary(salary),JoinDate(day,month,year)
		{
			cout<<"Employee(string name,int empid,float salary,int day,int month,int year):name(name),empid(empid),salary(salary),JoinDate(day,month,year)"<<endl;

		}

	void AcceptRecord()
	{
		cout<<"Name	:	";
		cin>>this->name;
		cout<<"Empid	:";
		cin>>this->empid;

		cout<<"salary	:";
		cin>>this->salary;

		cout<<"JoinDate	:";
		JoinDate.AcceptRecord();
	}

	void ShowRecord()
	{
	cout<<"Name 	:	"<<this->name<<endl;
	cout<<"Empid	:	"<<this->empid<<endl;
	cout<<"Salary	:	"<<this->salary<<endl;
	cout<<"JoinDate	:	";
	this->JoinDate.PrintRecord();

	}
};


int main()
{
	Employee e;
	e.AcceptRecord();
	e.ShowRecord();
return 0;
}


int main3()
{
	Employee e("abc",12,12345,12,12,1996);
	e.ShowRecord();

return 0;
}

int main2()
{
	string name="abc";
	int age=12;
	float salary=1.234;
	Date JoinDate(17,12,1996);

	Employee e(name,age,salary,JoinDate);
	e.ShowRecord();

return 0;
}

int main1()
{
	Employee e;
	e.ShowRecord();

return 0;
}


