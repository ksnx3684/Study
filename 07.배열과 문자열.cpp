#include <iostream>

using namespace std;

int main() {

	/*
	C++�� ���յ��������� �����Ѵ�.
	���յ����Ͷ� �⺻ �������� �ε��Ҽ������� ������ ���Ѵ�.
	����� ���Ǵ�� ���ο� ���������� ���� �� �ִ�.*/

	short month[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	cout << month[11] << endl;

	char a[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };

	cout << a << endl;

	char b[6] = "Hello";

	cout << b << endl;

	return 0;
}