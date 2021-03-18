//test.cpp
#include <iostream>
#include <string>
#include "date.h"
using namespace std;

void setDateValues (int&, int&, int&);
int main()
{
	
   int mth, day, yr;
   setDateValues (mth, day, yr);
   Date d1(mth, day, yr);  /* Insert statement(s) to create a Date instance (object) from the user input here*/
   cout << "Date is:\n";
   d1.Printer(0);
   d1.Printer(1);
   d1.Printer(2);
}
 
// SetDateValues obtains the user input in this test driver -- NOT in the Date class
//   implementation file 
void setDateValues (int& m, int& d, int& y)
{
   cout << "Enter month: ";
   cin >> m;
   cout << "Enter day: ";
   cin >> d;
   cout << "Enter year: ";
   cin >> y;
   
}