//date.cpp
#include "date.h"
#include <iostream>
using namespace std;

Date::Date()
{
	month = 1;
	day = 1;
	year = 2001;
}

Date::Date(const Date& d){
	month=d.month;
	day=d.day;
	year=d.year;
}

Date Date::operator-(const Date&d)
{
	Date temp = *this;
	if (temp.day < d.day)
	{
		temp.day+=30;
		temp.month--;
		if(temp.month<d.month)
		{
			temp.month+=12;
			temp.year--;
		}
	}
	temp.month=abs(temp.month-d.month);
	temp.day=abs(temp.day-d.day);
	temp.year=abs(temp.year-d.year);
		return temp;

}

bool Date::operator==(const Date&d)
{
	Date temp = *this;
	if (temp.year == d.year && temp.month == d.month && temp.day == d.day)
		return true;
	return false;
}

bool Date::operator>(const Date&d)
{
	Date temp = *this;
	if (temp.year > d.year)
		return true;
	return false;
}

Date Date::operator=(const Date&d)
{
	month = d.month;
	day = d.day;
	year = d.year;
	return *this;
}
istream& operator>>(istream& strm, Date& d)
{
	cout <<"Enter month(1 - 12): ";
	strm >>d.month;
	cout <<"Enter day (1 to maximum days in month): ";
	strm >> d.day;
	cout <<"Enter year (>=1800): ";
	strm >> d.year;
	return strm;
}

 ostream& operator<<(ostream& strm, Date& d)
{
	strm <<d.month <<"/" <<d.day <<"/" <<d.year;
	return strm;
}