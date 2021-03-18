class TollBooth
{
private:
	int m_nPayingStus;
	int m_nDeadbeatStus;
	int m_nTotStus;
	static int m_nCourseCount;
public:
	TollBooth();
	TollBooth(int max);
	void setValues(int maxCourses);
	void Sub(int n);
	void getValues();
	int retTotal();
	int retDeadbeat();
	int retPaying();
	static int retCourseCount();
};//end class declaration