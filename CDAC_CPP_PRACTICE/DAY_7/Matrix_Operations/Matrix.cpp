/*
 * Matrix.cpp
 *
 *  Created on: 11-Mar-2019
 *      Author: sunbeam
 */


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
	Initialize=1,Accept,Display,Addition,substraction,Multiplication
};

typedef menu MENU;

class Matrix
{
private:
		int row;
		int col;
		int **arr1;
		int **arr2;
public:
		Matrix(int row,int col)
		{

			this->row=row;
			this->col=col;

			arr1=new int*[row];
			for(int i=0;i<row;i++)
				arr1[i]=new int[col];

			/*arr2=new int*[row];

				for(int i=0;i<row;i++)
					arr2[i]=new int[col];*/
		}

		void Accept_Matrix()
		{
			for(int i=0;i<this->row;i++)
			{
				for(int j=0;i<this->col;j++)
				{

					cin>>this->arr1[i][j];
				}

			}
		}

		void Print_Matrix()
			{
				for(int i=0;i<this->row;i++)
				{
					for(int j=0;i<this->col;j++)
					{

						cout<<this->arr1[i][j];
					}

				}
			}
		~Matrix()
		{
			delete[] arr1;
			delete[] arr2;

		}

};
class MENUCHOICE
{
private:
		int choice;
public:
	void AcceptMenu()
	{
		cout<<"1.Initialize"<<endl;
		cout<<"2.Accept"<<endl;
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
	int choice=0;
	int row,col;
	do
	{
		MENUCHOICE c;

		c.AcceptMenu();
		cout<<""<<endl;
		cout<<"Enter Your Choice::"<<endl;
		cin>>choice;
		c.SetChoice(choice);
		choice=(MENU)c.GetChoice();
		/*cout<<"Enter the Row::"<<endl;
		cin>>row;
		cout<<"Enter the Col::"<<endl;
		cin>>col;*/
		Matrix m(2,2);
		switch(choice)
		{
		case Initialize:break;

		case Accept:
				cout<<"\n Enter the Elements in array-1"<<endl;
				m.Accept_Matrix();

				cout<<"\n Enter the Elements in array-2"<<endl;
				m.Accept_Matrix();
				break;
		case Display:
				cout<<"Matrix is::"<<endl;

				m.Print_Matrix();

				cout<<"======="<<endl;

				m.Print_Matrix();


				break;
				/*
		case Addition:
				break;
		case substraction:
				break;
		case Multiplication:
				break;*/
		case 0:
				return 0;
		}
	}while(choice != 0);
return 0;
}


