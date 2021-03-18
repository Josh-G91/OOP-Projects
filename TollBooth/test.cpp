//test.cpp

#include <iostream>
#include <string>
#include "toll.h"
using namespace std;
void inputCourseData (TollBooth*, int);
void outputCourseInfo (TollBooth*, float&);
void displayAvgToll (float);
/*
Insert any additional function prototypes for functions called by main here
*/
 
int main()
{
    int maxCourses; //input for dynamic memory allocation
    float totalTollAmt = 0; //calculated for all courses
    cout << "How many courses maximum? ";
    cin >> maxCourses;
    TollBooth* tboothPtr;
	tboothPtr = new TollBooth[maxCourses]; //Here you must dynamically create an array of TollBooth objects, pointed to by tboothPtr
   
     inputCourseData (tboothPtr, maxCourses);
	 outputCourseInfo (tboothPtr, totalTollAmt);
    displayAvgToll (totalTollAmt);
 
    delete[] tboothPtr; //Here you should release your dynamically allocated memory
    return 0;
}//main
//The test driver function implementations for inputCourseData, outputCourseInfo, and displayAvgToll go here

void inputCourseData (TollBooth* tboothPtr, int maxCourses)
{
	for(int n = 0; n < maxCourses; n++)
	{
			char y;
			cout <<"Enter 'y' to initialize new course data; any other character to quit: ";
			cin >>y;

			if (y!='y' && TollBooth::retCourseCount()==0)
				cerr <<"No actual courses" <<endl;

			
				if(y!='y')
			{
				tboothPtr[n].Sub(n);
				break;
			}

			cout <<"For course " <<n+1;
		tboothPtr[n].setValues(maxCourses);
	}
}//inputCourseData


void outputCourseInfo (TollBooth* tboothPtr, float &totalTollAmt)
{
	for(int n = 0; n < TollBooth::retCourseCount(); n++)
	{
		cout <<"For course " <<n+1 <<endl;
		tboothPtr[n].getValues();
		totalTollAmt+=(tboothPtr[n].retPaying()*.5);
	}

}//outputCourseInfo

void displayAvgToll (float totalTollAmt)
{
		if (TollBooth::retCourseCount()!=0)
	printf("The average toll per course is $%.2f\n", totalTollAmt/TollBooth::retCourseCount());
}//displayAvgToll
