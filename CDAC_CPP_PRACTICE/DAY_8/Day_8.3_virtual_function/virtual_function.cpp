/*
 * virtual_function.cpp
 *
 *  Created on: 12-Mar-2019
 *      Author: sunbeam
 */

#include<iostream>
#include<string>
using namespace std;

class Product
{
private:
		string name;
		float price;
public:
		Product(string name=" ",float price=0):name(name),price(price)
		{

		}

		virtual void AcceptRecord(){

			cout<<"Name	:	"<<endl;
			cin>>this->name;

			cout<<"Price	:	"<<endl;
			cin>>this->price;
		}
		virtual void PrintRecord(){

			cout<<"Name	is	:	"<<this->name<<endl;
			cout<<"Price	is	:	"<<this->price<<endl;
		}

};
class Book :public Product
{
private:
		//string name;
		//float price;
		int count;
public:
		Book(int count=0):count(count)
		{

		}
		void AcceptRecord()
		{
			Product::AcceptRecord();
			cout<<"Count	:	"<<endl;
			cin>>this->count;
		}

		void PrintRecord()
		{
			Product::PrintRecord();
			cout<<"Page Count is	:	"<<this->count<<endl;
		}
};


class Tape : public Product
{
private:
		//string name;
		//float price;
		int time;
public:
		Tape(int time=0):time(time)
		{}
		void AcceptRecord()
				{
					Product::AcceptRecord();
					cout<<"time	:	"<<endl;
					cin>>this->time;
				}

				void PrintRecord()
				{
					Product::PrintRecord();
					cout<<"Time is	:	"<<this->time<<endl;
				}
};

int menu_list()
{
	int choice;

	cout<<"0.Exit"<<endl;
	cout<<"1.Books."<<endl;
	cout<<"2.Tape."<<endl;

	cout<<"Enter the choice::";
	cin>>choice;

	return choice;
}

int main()
{

	int choice;

	while((choice= ::menu_list())!= 0)
	{
		Product *ptr=NULL;
		//Tape *ptr2=new Book;
		//Tape *ptr3=new Tape();
		//Book *ptr4=new Book();

		switch(choice)
		{

		case 1:
				ptr=new Book();
				break;
		case 2:
				//ptr=new Tape();
				break;
		case 0:
				return 0;


		}
		if(ptr != NULL)
		{
			ptr->AcceptRecord();
			ptr->PrintRecord();
			delete ptr;
		}
	}


return 0;
}
