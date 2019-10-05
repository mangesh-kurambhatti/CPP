/*
 *
 * memory_allocation.cpp
 *
 *  Created on: 08-Mar-2019
 *      Author: sunbeam
 */

#include<iostream>
using namespace std;

#define size 3

class ArgumentException
{
private :
	string message;
public:
	ArgumentException(string message)
	{
		this->message=message;
	}
	string GetMessage()
	{
		return this->message;
	}
};
class Array
{
private:
		int arr[size];

public:
		Array()
		{
			for(int i=0;i<size;i++)
				this->arr[i]=0;
		}
		void AcceptRecord()
		{
			for(int i=0;i<size;i++)
			{
				cout<<"Enter the Elements::"<<endl;
				cin>>arr[i];
			}
		}

			void PrintRecord()const
			{

				for(int i=0;i<size;i++)
					cout<<arr[i]<<endl;
			}

			void SetElement(int loc,int element)throw (ArgumentException)
			{
					if(loc >= 0 && loc < size)
					{
						this->arr[loc]=element;
					}
					else
					{
						throw ArgumentException("Invalid Index");
					}
			}

			int GetElement(int loc)
			{

				return this->arr[loc];

			}
};

int main()
{

	try{
		Array obj;

	//obj.PrintRecord();
	//obj.AcceptRecord();
	//obj.PrintRecord();

		obj.SetElement(0,32);

		obj.SetElement(1,33);

		obj.SetElement(2,34);

		for(int i=0;i<size;i++)
			{
				int element=obj.GetElement(i);
				cout<<element<<endl;
			}
	}

	catch(ArgumentException &f)
	{
		cout<<f.GetMessage()<<endl;

	}



return 0;
}


int main1()
{
	Array obj;

	obj.PrintRecord();
	obj.AcceptRecord();
	obj.PrintRecord();


	return 0;
}

