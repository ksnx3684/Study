#include <iostream>

using namespace std;

const float PIE = 3.14;
void cheers(int n);
float circle(int x);

void cheers(int n) {
	for (int i = 0; i < n; i++) {
		cout << "Cheers!" << endl;
	}
}

float circle(int x) {
	return x * x * PIE;
}

int main() {

	/*
	1. 함수 정의 제공
	2. 함수 원형 제공
	3. 함수 호출
	- 리턴 값이 있는 타입
	typeName functionName(parameterList)
	{
		statement(s);
		return value; >> typeName과 value의 데이터 형식이 같아야 한다.
	}
	- 리턴 값이 없는 타입
	void functionName(parameterList)
	{
		statement(s);
		return; // 생략될 수 있음
	*/

	int a;
	cout << "하나의 수를 입력하십시오." << endl;
	cin >> a;
	cheers(a);

	int b;
	cout << "원의 반지름 길이를 입력하십시오." << endl;
	cin >> b;
	float c = circle(b);
	cout << "원의 넓이는 " << c << "입니다." << endl;
}