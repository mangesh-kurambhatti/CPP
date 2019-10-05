#include<iostream>

namespace Test
{
	int i=20;
}

int i=100;
int main()
{
	int i=1000;
		

	std::cout<<"\n"<<::i<<"\n"<<Test::i<<"\n"<<i;

return 0;
}
