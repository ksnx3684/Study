#include <iostream>

using namespace std;

int main() {
	// 원의 넓이를 구하는 프로그램;
	//2PIr

	const float PI = 3.1415926535;
	// C처럼 최상단에 define으로 정의하면 모든 block에서 접근이 가능하지만 C++에서는 const라는 상수 정의 함수를 이용해서도 변수(상수)를 정의할 수 있다.
	// 대신 const를 이용할 경우, 선언된 블록 내부에서만 사용가능하다.

	int r = 3;
	float s = r * r * PI;

	cout << s << endl;

	// 데이터형 변환
	/*
	1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
	2. 수식에 데이터형을 혼합하여 사용했을 때
	3. 함수에 매개변수를 전달할 때
	*/
	
	int a = 3.1415926535;
	cout << a << endl;

	// 강제적으로 데이터형 변환
	// typeName(a) (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;
	cout << static_cast<int>(ch) << endl;

	// C++
	//static_cast<typeName>

	return 0;
}