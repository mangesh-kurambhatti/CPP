#include"stdio.h"
int i=10;
int main()
{
	int i=20;
	printf("\n %d",::i);
	{
		printf("%d",::i);
	}
return 0;

}
