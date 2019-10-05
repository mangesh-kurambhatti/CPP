/*
 * which_fun_to_do_static.cpp
 *
 *  Created on: 09-Mar-2019
 *      Author: sunbeam
 */
#include<iostream>

using namespace std;
//static const float PI;
class Math
{
public:
	static float power(float base,int index)
	{
		float result=1;
		for(int i=1;i<=index;i++)
			result=result*base;
		return result;

	}
};

static const float PI=3.14;

int main()
{
	float radius=10;

	float area=PI * Math::power(radius,2);

	cout<<"Area	:	"<<area<<endl;
	return 0;
}


