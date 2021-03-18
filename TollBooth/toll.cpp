//toll.cpp

#include <iostream>
#include <iomanip>
using namespace std;
#include "toll.h"

int TollBooth::m_nCourseCount = 0;

TollBooth::TollBooth()
{
	m_nDeadbeatStus=0;
	m_nPayingStus=0;
	cout <<"Now creating an unitialized course element...." <<endl;
}

TollBooth::TollBooth(int max)
{
	m_nCourseCount = max;

}

void TollBooth::setValues (int maxCourses)
{
	m_nCourseCount=maxCourses;
		
	cout << "\nHow many students entered the room? ";
	cin >>m_nTotStus;
	cout <<"How many students paid? ";
	cin >>m_nPayingStus;
	while ( m_nTotStus < m_nPayingStus)
	{
		cout <<"*** Invalid input: more paying than entered! ***";
		cout <<"\nHow many students entered the room? ";
		cin >>m_nTotStus;
		cout <<"How many students paid? ";
		cin >> m_nPayingStus;
	}
	m_nDeadbeatStus=m_nTotStus-m_nPayingStus;
}

void TollBooth::Sub(int n)
{
	m_nCourseCount-=(m_nCourseCount-n);
}
void TollBooth::getValues ()
{	
			cout <<m_nPayingStus+m_nDeadbeatStus <<" student(s) are in the course" <<endl;
			printf("The toll collected is $%.2f\n", .5*m_nPayingStus);
			cout <<m_nDeadbeatStus <<" student(s) didn't pay" <<endl;

}

int TollBooth::retTotal()
{
	return m_nPayingStus + m_nDeadbeatStus;
}

int TollBooth::retDeadbeat()
{
	return m_nDeadbeatStus;
}

int TollBooth::retPaying()
{
	return m_nPayingStus;
}

int TollBooth::retCourseCount()
{
	return m_nCourseCount;
}