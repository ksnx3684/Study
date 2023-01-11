#include <iostream>
#include <climits>

using namespace std;

int main() {

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_int << "이다." << endl;

	cout << "short는 " << sizeof n_short << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_short << "이다." << endl;

	cout << "long은 " << sizeof n_long << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_long << "이다." << endl;

	cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_llong << "이다." << endl;

	unsigned int a = -1; // unsigned를 정수 앞에 붙이면, 음수값을 표현하지 않고 대신 그 범위 만큼 양수로써 표현할 수 있는 값의 범위를 늘릴 수 있다.
	cout << a << endl;

	float b = 3.14;
	int c = 3.14;

	cout << b << ", " << c << endl;

	return 0;
	
}