/*
 * count_of_object_created.cpp
 *
 *  Created on: 09-Mar-2019
 *      Author: sunbeam
 */
#include<iostream>

using namespace std;

class CountObject
{
private:
		static int count;
public:
		CountObject()
		{
			++count;
		}

		static int GetCount()
		{
			return count;
		}

};
int CountObject::count=0;

int main()
{
	CountObject c,c1,c2,c3;

	int countOfObject=0;

	countOfObject=CountObject::GetCount();

		cout<<"Count is	::	"<<countOfObject<<endl;
return 0;
}

