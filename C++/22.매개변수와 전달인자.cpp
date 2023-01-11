#include <iostream>

using namespace std;

//void helloCPP(int, int); 밑에 void 함수가 main 함수 밑으로 내려가 있는 형식으로 코드되어있을경우에는 main 함수 이전에 해당 함수가 정의 되어있어야 한다.

void helloCPP(int n, int m) {
	for (int i = 0; i < n; i++) {
		cout << "Hello\n";
	}
	for (int i = 0; i < m; i++) {
		cout << "C++!\n";
	}
}

int main() {

	int times, times2;
	cout << "정수를 입력하십시오\n";
	cin >> times;
	cout << "정수를 한 번 더 입력하십시오\n";
	cin >> times2;
	helloCPP(times, times2);

	return 0;
}