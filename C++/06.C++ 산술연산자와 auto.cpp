#include <iostream>

using namespace std;

int main() {

	// +, -, *, /�� ������ �˰��ִ� ��Ģ���� ���ǿ� ����.
	// %�� ù ��° �ǿ����ڸ� �� ��° �ǿ����ڷ� ������ �������� ���Ѵ�.
	// ���� �� 19�� 6���� ������ �Ǹ� �� ���� 1�̴�.
	// �ε� �Ҽ���(�Ǽ�)�� ����� �� ����.
	
	int a = 10;
	int b = 3;
	int c = 5;

	cout << a+b << endl;

	int multiple = a / b * c;

	cout << multiple;

	// auto�� �ڵ����� �������� �������ش�. �׷��� ������ ���� ���� ������ �� �� �ֱ� ������ �ͽ������� ����.
	auto n = 100; // int��
	auto x = 1.5; // float��
	auto y = 1.3e12L; // y�� long long��

	return 0;
}