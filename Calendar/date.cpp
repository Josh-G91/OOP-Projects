//date.cpp

#include <iostream>
#include <string>
using namespace std;
#include "date.h"

Date::Date(int m, int d, int y)
{
	if (CheckDate(m,d,y))
	{
		month = m;
		day = d;
		year = y;
	}
	else{
	month=1;
	day= 1;
	year=2001;
	}
}

void Date::Printer(int x)
{
	switch(x){
	case 0:	cout <<month <<"-" <<day <<"-" <<year <<"\n"; break;
	case 1: cout <<monthStr[month-1] <<" " <<day <<", " <<year <<"\n"; break;
	case 2: cout <<day <<" " <<monthStr[month-1] <<" " <<year <<"\n"; 
	}
}


bool Date::CheckDate(int m, int d, int y)
{
	if (m<1 || d <1 || m>12)
		return false;
	else if (y<MIN_YEAR || y > MAX_YEAR)
		return false;
	else if (d > monthDays[m-1])
		return false;
	else
	return true;
}