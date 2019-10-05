/*
 * main.cpp
 *
 *  Created on: 12-Mar-2019
 *      Author: sunbeam
 */
#include "../includes/header_file.h"

void Accept_record(Shape *ptr,int ch)
{
	if(ch==1)
	{
		Rectangle *r=(Rectangle *)ptr;
		float l,b;
		cout<<"Length	:	"<<endl;
		cin>>l;
		r->SetLength(l);

		cout<<"Breadth	:	"<<endl;
		cin>>b;
		r->SetBreadth(b);
	}
	else if(ch==2)
	{
			Circle *c=(Circle *)ptr;
			float r;

			cout<<"Radius	:	"<<endl;
			cin>>r;

			c->SetRadius(r);

	}

}
void Print_record(Shape *ptr)
{
	float res=ptr->getarea();
	cout<<"Area is::"<<res<<endl;
}

int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Rectangle"<<endl;
	cout<<"2.Circle"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice;
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		Shape *ptr = NULL;
		switc	h( choice )
		{
		case 1:
			ptr = new Rectangle();	//Upcasting
			break;
		case 2:
			ptr = new Circle();	//Upcasting
			break;
		case 3:
			return 0;
		}
		if( ptr != NULL )
		{
			::Accept_record(ptr,choice);
			(*ptr).calculateArea( );
			::Print_record(ptr);
			delete ptr;
		}
	}
	return 0;
}




