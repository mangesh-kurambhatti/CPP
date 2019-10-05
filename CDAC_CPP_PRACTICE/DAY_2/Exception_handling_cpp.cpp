#include<iostream>

using namespace std;

int main(void)
{
	int no1,no2;
	int result;

	try
	{
		cout<<"Enter no1::";
		cin>>no1;

		cout<<"Enter no2::";
		cin>>no2;
	

		if(no2==0)
		{
			throw 1;
		}
		else
		{
			result=no1/no2;

			cout<<"Result is ::"<<result;
		}
	}
	catch(int n)
	{
		cout<<"Inside int catch1 n="<<n<<endl;
		cout<<"Can not divide by zero"<<endl;
	}

return 0;	
}
