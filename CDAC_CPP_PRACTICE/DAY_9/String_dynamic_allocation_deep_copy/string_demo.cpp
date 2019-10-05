/*
 * string_demo.cpp
 *
 *  Created on: 13-M
 *  ar-2019
 *      Author: sunbeam
 */




#include<iostream>
#include<cstring>

using namespace std;

class str_demo
{
private:
	int length=0;
	char* str=nullptr;
public:
	str_demo(void)
	{	}
	str_demo(int length):length(length)
	{
		this->str=new char[this->length + 1];
	}

	void SetString(char *demo)
	{
		for(int i=0;i<this->length;i++)
			this->str[i]=demo[i];
	}

	char* GetString()const
	{
		return this->str;
	}

	void Display_str()
	{

		cout<<"\nIn display()"<<endl;
		for(int i=0;i<this->length;i++)
		{
			cout<<str[i];
		}
		cout<<endl;
	}
	~str_demo()
	{
		delete[] str;
	}

};


int main()
{
	int len=0;
	cout<<"Enter the length of string you want ::"<<endl;
	cin>>len;

	//str_demo s1;
	//s1.Display_str();

	str_demo s1(len);

	char *name="mangesh";
	s1.SetString(name);
	//char* str1=s1.GetString();
	//cout<<"After getstring call"<<endl;
	s1.Display_str();
	//cout<<str1<<endl;
/*	for(int i=0;i<len;i++)
	{
		cout<<str1[i];
	}*/


	/*
	str_demo s1;
	s1.Display_str();
	i
	cout<<"\nPametierized ...";
	str_demo s2(he);
	s2.Display_str();
*/
	delete name;
return 0;
}
