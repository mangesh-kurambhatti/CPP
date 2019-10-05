//#include<time.h>
#include<iostream>
#include"Stack_cpp.h"
#include<stdlib.h>


int main()
{
	
	std::cout<<"\n ****WELCOME TO STACK USING CPP**** \n"<<std::endl;

	int ch,size;
	
	std::cout<<"\n Enter the size of stack to initialize :"<<std::endl;
	std::cin>>size;
    stack_demo s(size);
	

	do
	{
		std::cout<<"\n 1.PUSH"<<std::endl;
		std::cout<<"\n 2.POP"<<std::endl;
		std::cout<<"\n 3.Exit"<<std::endl;

		std::cout<<"\n Enter your choice :"<<std::endl;
		std::cin>>ch;

		switch(ch)
		{
			case 1:
					int data;
					
					//system.sleep(100);
					
					std::cout<<"\n Enter the data to push on to stack :"<<std::endl;
					std::cin>>data;
					if(!s.IsFull())
					{				
					s.push(data);
					}
					else
					{
						std::cout<<"\n Stack is Full \n";
					}
					break;
			case 2:
					
					if(!s.IsEmpty())
					{
					int p=s.pop();
					std::cout<<"\n POP element is :"<<p;
					}
					else
					{
					std::cout<<"\n Stack is Empty.."<<std::endl;
					}
					break;
			case 3:
					exit(0);
					break;					
		}

	}while(ch!=3);	
}
