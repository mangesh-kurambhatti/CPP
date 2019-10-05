/*
 * header_file.h
 *
 *  Created on: 12-Mar-2019
 *      Author: sunbeam
 */

#ifndef HEADER_FILE_H_
#define HEADER_FILE_H_

#include<iostream>
using namespace std;

class Shape
{
protected:
	float area;
public:
	Shape( void );

	virtual void calculateArea( void );

	float getarea();
};

class Rectangle : public Shape
{
private:
	float length;
	float breadth;
public:
	Rectangle( void ) ;
	void SetLength(float length);
	void SetBreadth(float breadth);

	void calculateArea( void );
};

class Circle : public Shape
{
private:
	float radius;
public:
	Circle( void );
	void SetRadius(float radius);
	void calculateArea( void );

};

#endif /* HEADER_FILE_H_ */
