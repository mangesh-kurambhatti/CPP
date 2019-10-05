#include<iostream>

int i=100;
int main()
{
	int i=1000;
		
	namespace Test
	{
		int i=20;
	}

	std::cout<<::i<<Test::i<<i;

return 0;
}
