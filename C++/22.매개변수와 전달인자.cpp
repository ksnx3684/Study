#include <iostream>

using namespace std;

//void helloCPP(int, int); �ؿ� void �Լ��� main �Լ� ������ ������ �ִ� �������� �ڵ�Ǿ�������쿡�� main �Լ� ������ �ش� �Լ��� ���� �Ǿ��־�� �Ѵ�.

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
	cout << "������ �Է��Ͻʽÿ�\n";
	cin >> times;
	cout << "������ �� �� �� �Է��Ͻʽÿ�\n";
	cin >> times2;
	helloCPP(times, times2);

	return 0;
}