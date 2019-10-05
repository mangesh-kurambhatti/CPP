/*
 * matrix_menuDriven.cpp
 *
 *  Created on: 11-Mar-2019
 *      Author: sunbeam
 */



#include<iostream>
using namespace std;

enum menu
{
	Accept=1,Print,Display,Addition,substraction,Multiplication
};

typedef menu MENU;


class MENUCHOICE
{
	private:
			int choice;	
	public:
		void AcceptMenu()
		{
			cout<<"1.Accept"<<endl;
			cout<<"2.Print"<<endl;
			cout<<"3.Display"<<endl;
			cout<<"4.Addition"<<endl;
			cout<<"5.Substraction"<<endl;
			cout<<"6.Multiplication"<<endl;
			cout<<"0.Exit";
		}	
	
	void SetChoice(int choice)
	{
		this->choice=choice;
	}

	int GetChoice()const
	{
		return this->choice;
	}
};

int main()
{
	int choice;
	do
	{
		MENUCHOICE c;

		c.AcceptMenu();
		cout<<""<<endl;
		cout<<"Enter Your Choice::"<<endl;
		cin>>choice;
		c.SetChoice(choice);
		choice=(MENU)c.GetChoice();

		switch(choice)
		{
		case Accept:
				break;
		case Print:
				break;
		case Display:
				break;
		case Addition:
				break;
		case substraction:
				break;
		case Multiplication:
				break;
		case 0:
				return 0;
		}
	}while(choice != 0);
return 0;
}

