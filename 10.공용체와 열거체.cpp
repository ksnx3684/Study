#include <iostream>

using namespace std;

int main() {
	// 공용체(union) - 일반적인 프로그래밍에는 잘 사용되지 않고 하드웨어 데이터구조나 운영체제와 같은 곳에 사용된다.
	// 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음. 이전 데이터값은 소실된다.

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

	// 열거체(enum)
	// 기호 상수를 만드는 것에 대한 또 다른 방법

	enum spectrum { red, orange, yellow, green, blue, violet, indigo, ultraviolet}; // 직접 열거자에 값을 넣을 수도 있다. ex) red=3, orange=5
	/*
	1. sepectrum을 새로운 데이터형 이름으로 만든다.
	2. red, orange,.. 0에서 7까지 정수 값을 각각 나타내는 기호 상수로 만든다.*/

	spectrum a = orange; // 열거자들끼리의 산술연산은 지원되지 않으나, 정수형에 대입할 때는 int형으로 변환될 수 있다.
	cout << a << endl;

	int b;
	b = blue;
	b = blue + 3;
	cout << b << endl;

	return 0;
}