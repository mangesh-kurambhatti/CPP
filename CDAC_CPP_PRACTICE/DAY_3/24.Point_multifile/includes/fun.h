/*
 * fun.h
 *
 *  Created on: 06-Mar-2019
 *      Author: sunbeam
 */

#ifndef FUN_H_
#define FUN_H_

namespace NPoint{

	class Point{

	private:
			int xPosition;
			int yPosition;

	public:
			Point(); // 1 parameterless
						Point(int value); // 2 one parameter
						Point(int xposition, int yposition); // 3 two parameters
						int GetXPosition() const;
						int GetYPosition() const;
						void SetXPosition(int xposition);
						void SetYPosition(int yposition);
						void AcceptInputFromConsole();
						void PrintOutputOnConsole()const;
						~Point();


	};

}



#endif /* FUN_H_ */
