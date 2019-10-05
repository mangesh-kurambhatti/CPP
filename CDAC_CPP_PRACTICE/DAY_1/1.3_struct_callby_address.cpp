#include<stdio.h>


#pragma pack(1)

struct emp
{
	int empno;
	char ename[10];
	float sal;
};

void AcceptEmpInfo(struct emp *e);

void PrintEmpInfo(struct emp *e);

int main()
{
	struct emp e1={100};

	printf("\nEnter the EMP INFO ::: \n");
	
	AcceptEmpInfo(&e1);

	printf("\n EMP INFO ::\n");

	PrintEmpInfo(&e1);
return 0;	
}


void AcceptEmpInfo(struct emp *e1)
{
	printf("Enter the EMP NO::\n");
	scanf("%d",&e1->empno);

	printf("Enter the EMP ename::\n");
	scanf("%s",e1->ename);

	do
	{
		printf("Enter the EMP SALARY::\n");
		scanf("%f",&e1->sal);
	}while(e1->sal < 0);
}

void PrintEmpInfo(struct emp *e1)
{
printf("\n************************\n");
	printf("EMP NO::%d \n",e1->empno);
	printf("EMP ename::%s\n",e1->ename);
	printf("EMP SALARY::%6.2f\n",e1->sal);
}
