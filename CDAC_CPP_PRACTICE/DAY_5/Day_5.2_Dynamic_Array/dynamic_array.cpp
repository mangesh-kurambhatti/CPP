/*
 * dynamic_array.cpp
 *
 *  Created on: 08-Mar-2019
 *      Author: sunbeam
 */


#include<iostream>
using namespace std;

class ArgumentException //nishi
{
private :
	string message; //error
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
		int *arr;
		int size;



public:
		Array(void)
		{
			cout<<"Array(void)"<<endl;
			this->size=0;
			this->arr=NULL;
		}

		Array(int size)
		{
			cout<<"	Array(int size)"<<endl;
			this->size=size;
			this->arr=new int[this->size];
		}

		void AcceptRecord()
		{
			for(int i=0;i < this->size;i++)
			{
				cout<<"Enter the Elements::"<<endl;
				cin>>arr[i];
			}
		}

			void PrintRecord()const
			{

				for(int i=0;i < this->size;i++)
					cout<<arr[i]<<endl;
			}

			/*void SetElement(int loc,int element)throw (ArgumentException)
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

			}*/
			/*
			void clear()
			{
				delete [] this->arr;
				this->arr=NULL;
			}*/

			~Array()
			{
				delete [] this->arr;
				cout<<"Inside Destructor"<<endl;
			}
};

int main4( void )
{
	Array *ptr = ( Array*)malloc( sizeof( Array ) );

	free( ptr );
	return 0;
}

int main( void )
{
	char name[ 20 ];
	Array *ptr =  new ( name ) Array( 3 );
	ptr->AcceptRecord();
	ptr->PrintRecord();
	ptr->~Array();
	return 0;
}

int main3()
{
	Array *ptr=new Array();

	//ptr->clear();

	delete ptr;
	return 0;
}

int main2()
{
	Array *ptr=new Array();

	//ptr->clear();

	delete ptr;
	return 0;
}

int main1()
{
	Array obj(3);

	obj.AcceptRecord();

	obj.PrintRecord();
return 0;
}


