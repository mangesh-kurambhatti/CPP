#ifndef DATE_H
#define DATE_H

class SpecialDate
{
	int dd;
	int mm;
	public:
		SpecialDate(int dd,int mm);
};

class Date
{
	int dd,mm,yy;
	public:

		Date();
		Date(int dd);
		Date(int dd,int mm,int yy);
		
		void SetDD(const int dd);
		void SetMM(const int mm);
		void SetYY(const int yy);
	
		int GetDD() const;
		int GetMM() const;
		int GetYY() const;

	operator int();

	operator SpecialDate();

};
#endif
