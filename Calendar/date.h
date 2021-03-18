#include <string>
using namespace std;


const int MIN_YEAR = 1900;
const int MAX_YEAR = 2015;
const string monthStr [] =
{"January", "February", "March", "April", "May", "June",
"July", "August", "September", "October", "November",
"December"};
const int monthDays [] =
{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

class Date
{
private:
	int month;
	int day;
	int year;
	bool CheckDate (int m, int d, int y);
public:
	Date();
	Date(int m, int d, int y);
	void Printer(int x);

};