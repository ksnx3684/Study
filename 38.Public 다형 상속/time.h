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
	virtual void show(); // virtual : ����Ű���尡 ������ void show�� ���� �޼��尡 �ȴ�.(���� ������ �ΰ��� �޼��� ���ǰ� �ִٴ� ���� ���α׷����� �˷��ش�)
	/*
	1. ���� Ŭ�������� ����޼��带 �����ϸ�, �� �Լ��� ���� Ŭ���� �� �Ļ��Ǵ� Ŭ�������� ��� ������ �ȴ�.
	2. ��ü�� ���� ������ ����Ͽ�, ��ü�� �����ϴ� �����͸� ����Ͽ� ���� �޼��尡 ȣ��Ǹ�
	������ �����͸� ���� ���ǵ� �޼��带 ������� �ʰ� ��ü���� ���� ���ǵ� �޼��带 ����Ѵ�. > ���� ����
	3. ����� ���� ���� Ŭ������ ����� Ŭ������ ������ ��, �Ļ� Ŭ�������� �ٽ� �����ؾ� �Ǵ� Ŭ���� �޼������ ���� �Լ��� �����ؾ� �Ѵ�.
	*/
	~Time();
	int getHour() { return hours; }
	int getMins() { return mins; }
	friend Time operator*(int n, Time& t) {
		return t * n;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewTime : public Time {

private:
	int day;
public:
	NewTime();
	NewTime(int, int, int);
	void show(); 
};

#endif //TIMEH