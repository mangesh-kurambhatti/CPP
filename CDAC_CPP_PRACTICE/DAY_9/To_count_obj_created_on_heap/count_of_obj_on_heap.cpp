	/*
 * count_of_obj_on_heap.cpp
 *
 *  Created on: 13-Mar-2019
 *      Author: sunbeam
 */

#include<iostream>

using namespace std;


class Demo
{
private:


public:
	static int count;
	Demo(void)
	{
	}
	~Demo()
	{

	}

	void * operator new(size_t sz)
	{
		Demo::count++;

	}

	void operator delete(void *)
	{
		Demo::count--;
	}
};

int Demo::count=0;

int main()
{

	Demo *D1=new Demo();

	Demo *p=new Demo();  //operator new(Demo &d1)

	Demo *q=new Demo();  //operator new(Demo &d1)
	Demo *e=new Demo();  //operator new(Demo &d1)
	Demo *r=new Demo();  //operator new(Demo &d1)


	delete D1;
	cout<<"Count is::"<<Demo::count;
return 0;
}
