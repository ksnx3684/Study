#include <iostream>

using namespace std;

int main() {

	// +, -, *, /은 기존에 알고있던 사칙연산 정의와 같다.
	// %는 첫 번째 피연산자를 두 번째 피연산자로 나누어 나머지를 구한다.
	// 예를 들어서 19를 6으로 나누게 되면 그 값은 1이다.
	// 부동 소수점(실수)은 사용할 수 없다.
	
	int a = 10;
	int b = 3;
	int c = 5;

	cout << a+b << endl;

	int multiple = a / b * c;

	cout << multiple;

	// auto는 자동으로 변수형을 결정해준다. 그러나 데이터 값에 따라 오류가 날 수 있기 때문에 맹신하지는 말자.
	auto n = 100; // int형
	auto x = 1.5; // float형
	auto y = 1.3e12L; // y는 long long형

	return 0;
}