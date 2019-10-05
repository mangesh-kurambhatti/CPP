#include<stdio.h>
#

struct emp
{
	int empno;
	char name[10];
	float sal;
};

int main()
{
	struct emp e1={100};

	struct emp *ptr=&e1;

	printf("\nSIZE OF e1=%ld\n\n",sizeof(e1));
	printf("\nSIZE OF e1=%ld\n\n",sizeof(ptr));


	printf("Enter the EMP NO::\n");
	scanf("%d",&e1.empno);

	printf("Enter the EMP NAME::\n");
	scanf("%s",e1.name);

	do
	{
		printf("Enter the EMP SALARY::\n");
		scanf("%f",&e1.sal);
	}while(e1.sal < 0);

	printf("\n");


	printf("\n************************\n");
	printf("\nEMP DETAILS using STRUCT VARIABLE\n");
	printf("EMP NO::%d \n",e1.empno);
	printf("EMP NAME::%s\n",e1.name);
	printf("EMP SALARY::%6.2f\n",e1.sal);
	
	printf("\n************************\n");
	printf("\nEMP DETAILS using POINTER VARIABLE\n");
	printf("EMP NO::%d \n",e1.empno);
	printf("EMP NAME::%s\n",e1.name);
	printf("EMP SALARY::%6.2f\n",e1.sal);


	printf("\n************************\n");
	printf("\nEMP DETAILS using POINTER VARIABLE\n");
	printf("EMP NO::%d \n",e1.empno);
	printf("EMP NAME::%s\n",e1.name);
	printf("EMP SALARY::%6.2f\n",e1.sal);

	//printf("\n &e1=%u AND &e+1=%u \n\n", &e1 ,&e1+1);

	//printf("\n ptr=%u AND ptr+1=%u \n\n", ptr ,ptr
//+1);
return 0;
}
