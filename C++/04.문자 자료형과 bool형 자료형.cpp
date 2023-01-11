#include <iostream>

using namespace std;

int main() {
	//char : 작은 문자형
	int a = 77;
	char b = a;
	// c++에선 null 문자 '\0'를 작성하여 데이터의 출력을 조절한다.
	// "" 에는 명시적으로 null문자가 포함되어있음 (Stirng형) 따라서 ''를 써야한다.
	cout << b << endl;

	char c = 'A';
	cout << c << endl;

	//bool : 0 혹은 1, false 혹은 true
	bool d = 0;
	bool e = 1;
	bool f = 10;

	cout << d << " " << e << " " << f << endl;

	return 0;
}