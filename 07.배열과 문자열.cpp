#include <iostream>

using namespace std;

int main() {

	/*
	C++는 복합데이터형을 제공한다.
	복합데이터란 기본 정수형과 부동소수점형의 조합을 말한다.
	사용자 정의대로 새로운 데이터형을 만들 수 있다.*/

	short month[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	cout << month[11] << endl;

	char a[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };

	cout << a << endl;

	char b[6] = "Hello";

	cout << b << endl;

	return 0;
}