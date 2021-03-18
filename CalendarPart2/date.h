//date.h
#include <iostream>
#include <string>
#include <cmath>
class Date
{
private:
	int month;
	int day;
	int year;
public:
	Date();
	Date(const Date& d);
	Date operator-(const Date &d);
	bool operator==(const Date &d);
	bool operator>(const Date &d);
	Date operator=(const Date &d);
	friend std::istream& operator>>(std::istream&, Date&);
	friend std::ostream& operator<<(std::ostream&, Date&);
};