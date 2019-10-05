//============================================================================
// Name        : multifile_virtual.cpp
// Author      : mangesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "../includes/header_file.h"


	Shape::Shape( void ) : area( 0 )
	{	}


	void Shape::calculateArea( void )
	{

	}

	float Shape::getarea()
	{
		return this->area;
	}

	Rectangle::Rectangle( void ) : length( 0 ), breadth( 0 )
	{	}

	void Rectangle::SetLength(float length)
	{
		this->length=length;
	}

	void Rectangle::SetBreadth(float breadth)
	{
		this->breadth=breadth;
	}

	void Rectangle::calculateArea( void )
		{
			this->area = this->length * this->breadth;
		}

	Circle::Circle( void ) : radius( 0 )
	{	}

	void Circle::SetRadius(float radius)
	{
		this->radius=radius;
	}

	void Circle::calculateArea( void )
	{
		this->area = 3.14f * this->radius * this->radius;
	}


