#include<stdlib.h>
#include<stdio.h>
int MenuChoice();

enum menu
{
	AcceptEmpInfo=1,PrintEmpInfo,SetSalary,GetSalary
};

typedef menu MENU;


struct employee
{
	private :

		int empno;
		char ename[10];
		float sal;


	public	:


		void AcceptEmpInfo()
		{
			printf("\n Enter the empno::\n");
			scanf("%d",&this->empno);


			printf("\n Enter the ename::\n");
			scanf("%s",this->ename);


			printf("\n Enter the sal::\n");
			scanf("%f",&this->sal);
		}
	
		void PrintEmpInfo()
		{
			printf("\nEMP NO is::%d\n",this->empno);		
			
			printf("\nEMPNAME is::%s\n",this->ename);

			printf("\nEMP SALARY is::%6.2f\n",this->sal);
		}

		void SetSalary(float sal)
		{
			
			this->sal=sal;		
		}

		inline float GetSalary()
		{

			return this->sal;
		}

};


int main()
{
	employee e;
	int choice;
	float newsal;
	
	do
	{
		choice=(MENU)MenuChoice();
		switch(choice)
		{
			case AcceptEmpInfo:
				e.AcceptEmpInfo();
			break;		

			case PrintEmpInfo:
				e.PrintEmpInfo();

			break;

			case SetSalary:
				printf("\n Enter the new SALARY:");
				scanf("%f",&newsal);
	
				e.SetSalary(newsal);
			break;

			case GetSalary:
				newsal=e.GetSalary();
				printf("New SALARY is::%f",newsal);
			break;

			case 0:
					exit(0);
		}
	}while(choice != 0);
return 0;	
}

int MenuChoice()
{
	int choice;


	printf("\n1.Accept EMP INFO.");
	printf("\n2.Display EMP INFO.");
	printf("\n3.Update salary.");
	printf("\n4.Print salary.");
	printf("\n0.Exit");
	
	printf("\n Enter your choice :");
	scanf("%d",&choice);	
	
	return choice;
}
