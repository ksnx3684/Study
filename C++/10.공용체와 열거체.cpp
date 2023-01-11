#include <iostream>

using namespace std;

int main() {
	// ����ü(union) - �Ϲ����� ���α׷��ֿ��� �� ������ �ʰ� �ϵ���� �����ͱ����� �ü���� ���� ���� ���ȴ�.
	// ���� �ٸ� ���������� �� ���� �� ������ ������ �� ����. ���� �����Ͱ��� �ҽǵȴ�.

	union MyUnion {
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	std::cout << test.intVal << std::endl;
	test.longVal = 33;
	std::cout << test.intVal << std::endl;
	std::cout << test.longVal << std::endl;
	test.floatVal = 3.3;
	std::cout << test.intVal << std::endl;
	std::cout << test.longVal << std::endl;
	std::cout << test.floatVal << std::endl;

	// ����ü(enum)
	// ��ȣ ����� ����� �Ϳ� ���� �� �ٸ� ���

	enum spectrum { red, orange, yellow, green, blue, violet, indigo, ultraviolet}; // ���� �����ڿ� ���� ���� ���� �ִ�. ex) red=3, orange=5
	/*
	1. sepectrum�� ���ο� �������� �̸����� �����.
	2. red, orange,.. 0���� 7���� ���� ���� ���� ��Ÿ���� ��ȣ ����� �����.*/

	spectrum a = orange; // �����ڵ鳢���� ��������� �������� ������, �������� ������ ���� int������ ��ȯ�� �� �ִ�.
	cout << a << endl;

	int b;
	b = blue;
	b = blue + 3;
	cout << b << endl;

	return 0;
}