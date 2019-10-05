#include<stdio.h>

int sum(int n1,long int n2)
{
	return n1+n2;
}

int sum(long int n1,int n2)
{
	return n1+n2;
}

int main()
{
	printf("\n Rsult=%ld",sum(10,11111111111111111111111));

	printf("\n Rsult=%ld",sum(11111111111111111111111,10));

return 0;
}
