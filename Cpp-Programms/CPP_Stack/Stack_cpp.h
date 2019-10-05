
#ifndef STACK_H
#define STACK_H
//#include<iostream>
//#include<stdbool>

class stack_demo
{
	public:

	int *m_ipstack;
	int m_isize;
	int m_itop;


	
	stack_demo(const int size);
	
	~stack_demo();

	void push(const int data);

	int pop();

	bool IsFull();
	
	bool IsEmpty();
	
};
#endif
