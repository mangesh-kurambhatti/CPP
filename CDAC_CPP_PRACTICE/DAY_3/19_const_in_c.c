#include<stdio.h>

/*
int main(void)
{
	int no=10;
	int *ptr=&no;

	printf("\n no=%d ",no);
	
	no=30;
	
	printf("\n no=%d ",no);
	
	printf("\n *ptr=%d ",*ptr);
	
	*ptr=40;
		
	printf("\n *ptr=%d ",*ptr);
	
return 0;
}
*/
/*
int main()
{
	const int no;

	int *ptr=&no;

	printf("\n no=%d ",no);

	no=20;
	

	printf("\n no=%d ",no);
	printf("\n *ptr=%d",*ptr);

	*ptr=30;

		printf("\n *ptr=%d ",*ptr);
		printf("\n no=%d ",no);
	
return 0;		

}*/
/*
int main()
{
	const int no=10;

	int *ptr=&no;

	printf("\n no=%d ",no);
	
	
//	printf("\n no=%d ",no);
	

	printf("\n *ptr=%d",*ptr);

	int no2=30;
	ptr=&no2;

		printf("\n *ptr=%d ",*ptr);
		printf("\n no=%d ",no2);
	
return 0;		
}*/
#include<stdio.h>
/*int main( void )
{
	float pi=3.142f;
	float *ptr= &pi;

	printf("\n pi=%f", pi);
	pi=3.14f;
	printf("\n pi=%f", pi);
	printf("\n *ptr=%f", *ptr);
	*ptr= 3.152f;
	printf("\n *ptr=%f", *ptr);

	return 0;
}*/
/*
int main( void )
{
	//const float pi=3.142f;
	const float pi;
	float *ptr= &pi;

	printf("\n pi=%f", pi);
	//pi=3.14f; // as pi is constant
	//pi++;
	//++pi;
	//--pi;
	//pi--;
	//pi+=10;
	//pi-=10;
	//pi/=10;
	//pi*=10;

	printf("\n pi=%f", pi);
	printf("\n *ptr=%f", *ptr);
	*ptr= 3.152f; // changing value of pi using pointer
	printf("\n *ptr=%f", *ptr);
	printf("\n pi=%f", pi);
	return 0;
}
*/
/*
int main( void )
{
	const float pi=3.142f;

	const float *ptr= &pi; // value of the pointer is const
	//float const *ptr= &pi;// value of the pointer is const

	printf("\n pi=%f", pi);
	printf("\n *ptr=%f", *ptr);

	// not allowed to modify value of pi using pointer
	//as vakue of the pointer is const
	//*ptr= 3.152f; // changing value of pi using pointer
	printf("\n *ptr=%f", *ptr);
	printf("\n pi=%f", pi);
	return 0;
}
*/
/*
int main( void )
{
	const float pi=3.142f;
	float pj=10.2f;
	const float *ptr= &pi; // value of the pointer is const
	//float const *ptr= &pi;// value of the pointer is const

	printf("\n pi=%f", pi);
	printf("\n *ptr=%f", *ptr);

	//pi=1.2f; // not allowed as pi is const
	//*ptr=1.2f; // not allowed as value of ptr is const
	ptr=&pj; // allowed as pointer is not const

	printf("\n *ptr=%f", *ptr);
	printf("\n pij%f", pj);
	return 0;
}
*/
int main( void )
{/*
	const float pi=3.142f;
	float pj=10.2f;
	const float * const ptr= &pi; // value of the pointer is const
	//float const *ptr= &pi;// value of the pointer is const
    // ptr is const pointer -- address stored  in pointer can not be changed
	printf("\n pi=%f", pi);
	printf("\n *ptr=%f", *ptr);

	//pi=1.2f; // not allowed as pi is const
	//*ptr=1.2f; // not allowed as value of ptr is const
//	ptr=&pj; // not allowed  as address is const

	printf("\n *ptr=%f", *ptr);
	printf("\n pij%f", pj);
	*/
	
	const int no1=20;
	const int *ptr=&no1;

	printf("\n no1=%d",no1);
	printf("\n *ptr=%d",*ptr);

	
	*ptr=33;

	//printf("\n no2=%d",no2);
	printf("\n *ptr=%d",*ptr);

	
return 0;
}		

