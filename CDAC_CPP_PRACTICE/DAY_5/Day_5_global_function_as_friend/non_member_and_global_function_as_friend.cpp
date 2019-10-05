/*
 * non_member_and_global_function_as_friend.cpp
 *
 *  Created on: 08-Mar-2019
 *      Author: sunbeam
 */


#include<iostream>
using namespace std;

class Test
{
private:
		int num1;
		int num2;
public:
		Test(void)
		{
			this->num1=10;
			this->num2=20;
		}
		friend int main();
};
int main()
{
	Test t;

	cout<<"num1="<<t.num1<<endl;

	cout<<"num2="<<t.num2<<endl;
}

