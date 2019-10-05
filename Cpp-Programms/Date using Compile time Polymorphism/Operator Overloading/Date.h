#ifndef DATE_H
#define DATE_H

class Date
{
	int dd;
	int mm;
	int yy;
	public:
	Date();
	Date(int d,int m,int y);
	void SetDate(const int d);
	void SetMonth(const int m);
	void SetYear(const int y);
	int GetDate()const;
	int GetMonth()const;
	int GetYear()const;
	
	Date operator+(const int d);

	bool operator==(const Date& obj)const;
	bool operator<(const Date& obj)const;

	Date& operator++();
	Date operator++(int);

	Date& operator--();
	bool operator!=(const Date&obj)const;
	Date operator=(const Date& obj);

};

#endif
