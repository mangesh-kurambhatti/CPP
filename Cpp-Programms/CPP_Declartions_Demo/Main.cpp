#include<iostream>
#include "CPPDeclarations.h"


void SimulateCPPDeclarations()
{
	CPPDeclarations defaultObject; //default constructor will be invoked
	int i(10); //int i=10, this is another way of initialization
	i=20; //assignemnt

#if INITIALIZATION
	
	CPPDeclarations overloadedObject(10,20,20,40,50);
	std::cout<<"\n Displaying value of overloaded Object !!"<<std::endl;
	std::cout<<"\n Public variable value is :"<<overloadedObject.iPublic<<std::endl;

	std::cout<<"\n Private variable value is :"<<overloadedObject.GetPrivate()<<std::endl;
	std::cout<<"\n Protected variable value is :"<<overloadedObject.GetProtected()<<std::endl;
	std::cout<<"\n Constant variable value is :"<<overloadedObject.GetConstant()<<std::endl;
	std::cout<<"\n Reference variable value is :"<<overloadedObject.GetByReference()<<std::endl;
	std::cout<<"\n Mutable variable value is :"<<overloadedObject.GetMutable()<<std::endl;

	std::cout<<"Setting Values of Overloaded Object !!"<<std::endl;
	overloadedObject.iPublic=100;
	overloadedObject.SetPrivate(200);
	overloadedObject.SetProtected(300);
	overloadedObject.SetMutable(400);

	std::cout<<"\n Displaying Values of Overloaded Object !!"<<std::endl;
	std::cout<<"\n Public Variable value is "<<overloadedObject.iPublic<<std::endl;

	std::cout<<"\n Private variable value is :"<<overloadedObject.GetPrivate()<<std::endl;
	std::cout<<"\n Protected variable value is :"<<overloadedObject.GetProtected()<<std::endl;
	std::cout<<"\n Constant cariablr value is :"<<overloadedObject.GetConstant()<<std::endl;
	std::cout<<"\n Reference variable value is :"<<overloadedObject.GetByReference()<<std::endl;
	std::cout<<"\n Mutable variable value is :"<<overloadedObject.GetMutable()<<std::endl;

	std::cout<<"\n Static variable value is :"<<CPPDeclarations::iStatic<<std::endl;//ask this
	//static is a 
#else
	
	std::cout<<"\n Let's understand DEEP copy v/s SHALLOW copy"<<std::endl;
	CPPDeclarations::iStatic=20;
	//defaultObject.iStatic=20;
	CPPDeclarations copyObject(defaultObject); // result into invoking compiler provided copy constructor

	std::cout<<"\n Displaying values of Copy Object !!"<<std::endl;
	std::cout<<"\n Public Variables value is :"<<copyObject.iPublic<<std::endl;
	std::cout<<"\n Private Variable value is :"<<copyObject.GetPrivate()<<std::endl;
	std::cout<<"\n Protected Variable value is :"<<copyObject.GetProtected()<<std::endl;
	std::cout<<"\n Const variable value is :"<<copyObject.GetConstant()<<std::endl;
	std::cout<<"\n Reference variable value is :"<<copyObject.GetByReference()<<std::endl;
	std::cout<<"\n Mutable variable value is :"<<copyObject.GetMutable()<<std::endl;

#endif
}

 
int main()
{
	SimulateCPPDeclarations();
}
