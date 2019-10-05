#include "CPPDeclarations.h"
#include "stdio.h"
#include <iostream>
#include <string.h>

int CPPDeclarations::iStatic=10;	// static variables must be defined once ,outside the class.

CPPDeclarations::CPPDeclarations():iReference(iProtected),//reference must be initialized
									iPrivate(0),
									iProtected(10),
									iConst(10),//must be initialized
									iMutable(0),
									iPublic(0) 

		{
			//iReference=iProtected
			//iConst=20; // this gives an error as it is an assignment not an initialization
			iSize=10;
			iPointer= new int[iSize];
			memset(iPointer,55,10*sizeof(int));
		}

CPPDeclarations::CPPDeclarations(const int Private,const int Const, const int Protected,const int Mutable,const int Public) :	iReference(iProtected),
							iConst(Const),
							iPrivate(Private),
							iProtected(Protected),
							iMutable(Mutable),
							iPublic(Public)

	{
		std::cout<<"overloaded Constructor"<<__LINE__<<":"<<__FUNCTION__<<std::endl;
		int iSize=10;
		iPointer = new int[iSize];
		memset(iPointer,65,10*sizeof(int));
    }

CPPDeclarations::CPPDeclarations(const CPPDeclarations &existingObject)
				:iReference(iProtected),
				 iConst(existingObject.iConst)
{
		std::cout<<"Copy Constructor"<<__LINE__<<":"<<__FUNCTION__<<std::endl;
		this->iPublic=existingObject.iPublic;
		this->iPrivate=existingObject.iPrivate;
		this->iProtected=existingObject.iProtected;
		this->iMutable=existingObject.iMutable;
		this->iSize=existingObject.iSize;

#if SHALLOW
		this->iPointer=existingObject.iPointer;
		//if we do this->pointer=exixtingObject.iPointer then it is shallow copy .this behaviour is same as default copy constructor (provided by compiler)
	
#else
		this->iPointer=new int[this->iSize]; //this result in performing deep copy
		bcopy(this->iPointer,existingObject.iPointer,this->iSize*sizeof(int));
#endif
}

CPPDeclarations::~CPPDeclarations()
{
		std::cout<<"Destructor"<<__LINE__<<":"<<__FUNCTION__<<std::endl;
		std::cout<<"Address of iPointer is "<<iPointer<<std::endl;
		delete[] iPointer;
}

// accessor/ Getter methods
//constant function ,modification of class data members not allowed
//this const result into making "this" as a pointer pointing to constant data

int CPPDeclarations::GetPrivate()const
{
	return iPrivate;
}	

const int CPPDeclarations::GetConstant() const
{
	return iConst;
}

int CPPDeclarations::GetProtected() const
{
	return iProtected;
}
int CPPDeclarations::GetByReference() const
{
	return iReference;
}

int CPPDeclarations::GetMutable()const
{
	//CPPDeclarations const * const this =&calling_Object
	return this->iMutable;
}

//Mutators / Setters Methods

void CPPDeclarations::SetPrivate(const int Private)
{
	this->iPrivate=Private;	//this is constant Pointer.
	
	//i.e. CPPDeclarations *const this=&calling_Object(address of calling object)
	/* CPPDeclarations Object;
		this=&object;*/ //Not allowed as this is a constant Pointer
}

void CPPDeclarations::SetProtected(const int Protected)
{
	this->iProtected=Protected;
}

void CPPDeclarations::SetByReference(const int Reference)
{
	this->iReference=Reference;
}

//mutable specifies modification allowed in 
//constant functions.Deliberately made this function  constant.

void CPPDeclarations::SetMutable(const int Mutable)const
{
	this->iMutable=Mutable;
	int i=20;
	//this->iPrivate =100; //member other than mutable can't be modified inside constant function
}
