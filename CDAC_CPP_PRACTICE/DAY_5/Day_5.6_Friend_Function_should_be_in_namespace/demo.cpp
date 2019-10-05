#include<iostream>
using namespace std;

namespace feb19
{
void print();
	class Test
	{
	private:
		int number;
	public:
		Test( void )
		{
			this->number = 10;
		}
		friend void print( void );
	};//end of class
}//end of namespace
void feb19::print( void )
{
	Test t;
	cout<<"Number	:	"<<t.number<<endl;
}
int main( void )
{
	feb19::print();
	return 0;
}
