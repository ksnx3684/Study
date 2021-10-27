#include <iostream>

using namespace std;

int main() {

	for (int i = 0; i < 5; i++) {
		cout << i << "번째입니다." << endl;
	}

	// 증가 연산자, 감소 연산자
	int a = 10;
	int b = 10;

	cout << "a는 " << a << ", b는 " << b << endl;
	cout << "a++는 " << a++ << endl; // 변수 a의 값을 먼저 판단하고 증가
	cout << "++b는 " << ++b << endl; // 먼저 값을 증가시키고 변수 b를 판단
	cout << "a는 " << a << ", b는 " << b << endl;

	// 관계표현식
	/*
	< : 작다
	<= : 작거나 같다
	> : 크다
	>= : 크거나 같다
	== : 같다
	!= : 같지 않다
	*/

	return 0;
}