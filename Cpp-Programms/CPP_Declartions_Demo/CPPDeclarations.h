#ifndef CPPDECLARATIONS_H
#define CPPDECLARATIONS_H

class CPPDeclarations
{
	public:
			int iPublic;	//accessible directly by object
			static int iStatic;	//is property of class
	private:
			int iPrivate;

			const int iConst;	//must be initialized while defining

			int &iReference;	//alise to an existing memory

			int *iPointer;
			int iSize;
	
	protected:
				int iProtected;		//accessibleonly within class and inherited by immidiate child class
				
				mutable int iMutable; 	//modification allowed in constant function


	public:
			//manager methods
		
			CPPDeclarations(); 	//default constructor
		
			CPPDeclarations(const int Private, const int Const, const int Protected, const int Mutable, const int Public);
			
			~CPPDeclarations();		//Destructor;

			//Copy Constructor
	
			CPPDeclarations(const CPPDeclarations &existingObject);

			// Accessor /Getter methods
		
			// constant functions,modifiactions of class data members not allowed
			// this const results into making "this" as a pointer pointing to a const data

			int GetPrivate() const;
			// const CPPDeclarations  * const this =&obj;
			
			//obj.GetPrivate()
			//CPPDeclarations *const this=&obj;
			// this->iPrivate=10;

			const int GetConstant() const;
			int GetProtected() const;
			int GetByReference() const;
			int GetMutable() const;

			// Mutator / Setter Methods

			void SetPrivate(const int Private);
			void SetProtected(const int Protected);
			void SetByReference(const int Reference);
			
			// mutable specifies modifications allowed in
			// constant functions. Deliberately made this function constant.

			void SetMutable(const int Mutable) const;
};
#endif
