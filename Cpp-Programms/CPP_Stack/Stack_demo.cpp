#include "Stack_cpp.h"
#include <stdio.h>
#include <iostream>

stack_demo::stack_demo(const int size): m_isize(size),m_itop(-1)
{
		m_ipstack=new int[m_isize];
}

stack_demo::~stack_demo()
{
	m_isize=0;
    m_itop=-1;
	delete[] m_ipstack;
}

void stack_demo::push(const int data)
{
	this->m_ipstack[++(this->m_itop)]=data;
}

int stack_demo::pop()
{
	int pop_element=this->m_ipstack[m_itop];
	m_itop--;
	return pop_element;
}

bool stack_demo::IsFull()
{
 return m_itop==m_isize-1; 
}

bool stack_demo::IsEmpty()
{
	return m_itop==-1;
}
