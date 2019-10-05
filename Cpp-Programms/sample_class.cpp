#include<iostream>

class Test
{
	int i;
	public:
		Test()
		{
			std::cout<<"Constructor"<<std::endl;
		}
};

int main()
{
	Test t;
	std::cout<<sizeof(t)<<"Byte"<<"\n";
}
