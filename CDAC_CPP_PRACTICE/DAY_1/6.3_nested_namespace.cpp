#include<stdio.h>

namespace N1
{
	int no1=500;
	int no2=700;
}

namespace N2
{
	int no1=250;
	namespace N3
	{
		int no1=75;
		int no3=800;
	}
}

int no1=10;

int main()
{
	int no1=100;//local variable;

	printf("\n NO1=%d AND &NO1=%u local variable",no1,&no1);


	printf("\n ::NO1=%d AND &::NO1=%u local variable\n",::no1,&::no1);


	printf("\n N1::NO1=%d AND &N1::NO1=%u variable from namespace 1\n",N1::no1,&N1::no1);

return 0;

}
