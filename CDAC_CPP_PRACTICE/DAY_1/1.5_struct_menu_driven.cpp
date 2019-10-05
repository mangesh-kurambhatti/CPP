#include<stdio.h>


#pragma pack(1)

struct emp
{
	int empno;
	char ename[10];
	float sal;
};

int MenuChoice();


void AcceptEmpInfo(struct emp *e1);

void PrintEmpInfo(struct emp *e1);

void SetSalary(struct emp *e1,float sal);

float GetSalary(struct emp *e1);


int main()
{
	struct emp e1={100};
	float newsal;
	int choice;

	do
	{
		choice =MenuChoice();
		
		switch(choice)
		{
			default:
					printf("\nInvalid case\n");
					continue;
			case 1:
			printf("\nEnter the EMP INFO ::: \n");
			
			AcceptEmpInfo(&e1);
			break;

			case 2:
			printf("\n EMP INFO ::\n");

			PrintEmpInfo(&e1);
			break;

			case 3:
			printf("\n Enter the NEW SALARY::\n");
			scanf("\n%f",&newsal);

			SetSalary(&e1,newsal);
			
			printf("\n EMP INFO ::\n");

			PrintEmpInfo(&e1);
			break;

			case 4:
		
			newsal=GetSalary(&e1);
			printf("\n NEW SALARY is ::%6.2f",newsal);
				break;
			case 0:
				return 0;
		}			

	}while(choice != 0);
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

void SetSalary(struct emp *e1,float sal)
{
	e1->sal=sal;
}

float GetSalary(struct emp *e1)
{
	return e1->sal;
}

int MenuChoice()
{
	int choice;

	printf("\n1.Accept EMP INFO.");
	printf("\n2.Print EMP INFO.");
	printf("\n3.Update Salary.");
	printf("\n4.Print Salary.");
	printf("\n0.Exit");

	printf("\n Enter the Choice:");
	scanf("\n%d",&choice);

	return choice;
}
