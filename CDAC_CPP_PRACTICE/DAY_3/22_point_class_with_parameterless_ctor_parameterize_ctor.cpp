#include<iostream>

using namespace std;

namespace NPoint{
		
	class Point{

		private:
				int xPosition;
				int yPosition;
		public:
			Point()
			{
				this->xPosition=100;
				this->yPosition=200;

				cout<<"\n Inside Parameterless ctor of Point Class"<<endl;
			}

			Point(int value)
			{
				this->xPosition=value;
				this->yPosition=value;
				cout<<"\n Inside One Paramete ctor of Point Class"<<endl;
			}

			Point(int xposition,int yposition)
			{
				this->xPosition=xposition;
				this->yPosition=yposition;
				cout<<"\n Inside Two Parameter ctor of Point Class"<<endl;
			}

		int GetXPosition()const
			{
				return this->xPosition;
			}
		
		int GetYPosition()const
			{
				return this->yPosition;
			}
		

		void SetXPosition(int xposition)
			{
				this->xPosition=xposition;
			}


		void SetYPosition(int yposition)
			{
				this->yPosition=yposition;
			}

		void AcceptInputFromConsole()
		{
				cout<<"Enter xPosition :: ";
				cin>>this->xPosition;
				cout<<"Enter yPosition :: ";
				cin>>this->yPosition;
		}

		void PrintOutputOnConsole()const
		{
				cout<<" this->xPosition :: "<<this->xPosition<<endl;
				cout<<" this->yPosition :: "<<this->yPosition<<endl;
		}


			~Point()
			{
				this->xPosition=0;
				this->yPosition=0;
				cout<<"inside dtor of Point class"<<endl;
			}
			
	};//class end	
}//namespace end

using namespace NPoint;

int main(void)
{
	Point P1;

	//case 1	
	cout<<"P1::"<<endl;
	P1.PrintOutputOnConsole();

	cout<<"=============================="<<endl;

	//case2
	Point P2(100);
	
	cout<<"P2::"<<endl;
	P2.PrintOutputOnConsole();

	cout<<"=============================="<<endl;

	//case3
	Point P3(1000,2000);
	
	cout<<"P23::"<<endl;
	P3.PrintOutputOnConsole();

	cout<<"=============================="<<endl;

	//case4

	//void p4();

	//cout<<"=============================="<<endl;

	//case5

	//Point p5()

//	cout<<"=============================="<<endl;


	//case 6

	Point P6;
	Point *ptr=&P6;
	cout<<"Ptr::"<<endl;
	ptr->PrintOutputOnConsole();
	
	cout<<"=============================="<<endl;

	//case 7
	Point P7;
	Point &pref=P7;

	cout<<"Pref::"<<endl;
	pref.PrintOutputOnConsole();
	
	cout<<"=============================="<<endl;

	//case 8				
	Point P8=(100,200,300,400);//one parameter constructore
	//Point P8(400);


	cout<<"P8::"<<endl;
	P8.PrintOutputOnConsole();
	
	cout<<"=============================="<<endl;
	
	Point(10,20).PrintOutputOnConsole(); // two parameter ctor
	// xpoistion 10, yposition=20

	Point(10).PrintOutputOnConsole(); // one parameter ctor
	// xpoistion 10, yposition=10

	Point().PrintOutputOnConsole(); //  parameterless ctor
	// xpoistion 100, yposition=200

	cout<<"=============================="<<endl;

	Point P10={500}; //One Parameter ctor
	cout<<"P11::"<<endl;
	P10.PrintOutputOnConsole();


return 0;
}
