#include <iostream>
#ifndef TIMEH
#define TIMEH

class Time
{
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	Time operator*(int);
	void show();
	~Time();
	friend Time operator*(int n, Time& t) {
		return t * n;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewTime : public Time {
	/*
	1. �Ļ� Ŭ�������� ��ü �ȿ��� ���� Ŭ�������� ������ ������� ����ȴ�.
	2. �Ļ� Ŭ�������� ��ü�� ���� Ŭ�������� �޼������ ����� �� �ִ�.
	3. �Ļ� Ŭ������ �ڱ� �ڽ��� �����ڸ� �ʿ�� �Ѵ�.
	4. �Ļ� Ŭ������ �ΰ����� ������ ������ ��� �Լ����� ���Ƿ� �߰��� �� �ִ�.
	*/
private:
	int day;
public:
	NewTime();
	NewTime(int, int, int);
	void print();
};

#endif //TIMEH
