#include<stdio.h>

namespace N1
{
	int no1=500;
	int no2=700;
}

int no1=10; //Global Variable

int main()
{
	int no1=100;

	printf("\n NO1=%d &NO1=%u local variable\n",no1,&no1);


	printf("\n NO1=%d &NO1=%u Global Variable\n",::no1,&::no1);

	printf("\n N1::NO1=%d &N1::NO1=%u Variable from NAMESPACE N1\n",N1::no1,&N1::no1);
	

printf("\n N1::NO2=%d &N1::NO2=%u Variable from NAMESPACE N1\n",N1::no2,&N1::no2);

	using namespace N1;
	printf("\n NO1=%d &NO1=%u Variable from NAMESPACE N1\n",N1::no1,&N1::no1);
//because no1 variable is local also and in namesace also when such scenario happen we need to use NAMESPACE_NAME :: VARIABLE_NAME;

return 0;
	
}
