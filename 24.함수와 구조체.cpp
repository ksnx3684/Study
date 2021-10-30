#include <iostream>

using namespace std;

struct Time
{
	int hours;
	int mins;
};

const int minsPerHr = 60;

Time sum(Time* t1, Time* t2) {
	Time total;

	// ������ ����� ������ �� : .
	// �ּҿ��� ����� ������ ��: ->
	total.mins = (t1->mins + t2->mins) % minsPerHr;
	total.hours = t1->hours + t2->hours + (t1->mins + t2->mins) / minsPerHr;

	return total;
}

void showTime(Time t1) {
	cout << t1.hours << "�ð�, " << t1.mins << "�� �Դϴ�." << endl;
}

int main() {

	//�Լ��� ������ �ƴ� ���纻�� ������� �۾��Ѵ�.
	
	Time day1 = { 5, 45 };
	Time day2 = { 4, 55 };

	Time total = sum(&day1, &day2);

	cout << "��Ʋ �� �ҿ� �ð� : ";
	showTime(total);

	return 0;
}