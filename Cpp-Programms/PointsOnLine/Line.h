#ifndef LINE_H
#define LINE_H

class Line
{

	private :

		int x1,y1,x2,y2;

	public:

		Line();
	    void LieOnXaxis(int,int);
		void LieOnYaxis(int,int);
		void ParallelToXaxis(int,int,int,int);
		void ParallelToYaxis(int,int,int,int);
		void PassingThroughOrigin(int,int,int,int);

		bool ToCheckOn1stQuadrant(int,int,int,int);
		bool ToCheckOn2ndQuadrant(int,int,int,int);
		bool ToCheckOn3rdQuadrant(int,int,int,int);
        bool ToCheckOn4thQuadrant(int,int,int,int);
		
		int GetX1();
		int GetX2();
	
	    int GetY1();
		int GetY2();

		void SetX1(int);
		void SetX2(int);

		void SetY1(int);
		void SetY2(int);
};
#endif
