#include <iostream>

using namespace std;

int main() {

	for (int i = 0; i < 5; i++) {
		cout << i << "��°�Դϴ�." << endl;
	}

	// ���� ������, ���� ������
	int a = 10;
	int b = 10;

	cout << "a�� " << a << ", b�� " << b << endl;
	cout << "a++�� " << a++ << endl; // ���� a�� ���� ���� �Ǵ��ϰ� ����
	cout << "++b�� " << ++b << endl; // ���� ���� ������Ű�� ���� b�� �Ǵ�
	cout << "a�� " << a << ", b�� " << b << endl;

	// ����ǥ����
	/*
	< : �۴�
	<= : �۰ų� ����
	> : ũ��
	>= : ũ�ų� ����
	== : ����
	!= : ���� �ʴ�
	*/

	return 0;
}