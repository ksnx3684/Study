#include <iostream>

using namespace std;

void countDown(int n) {
	cout << "Counting..." << n << endl;
	if (n > 0) {
		countDown(n - 1);
	}
	cout << n << "��° ����Լ�" << endl;
}

int func(int n) {
	return n + 1;
}

int main() {

	// ���ȣ�� : C++���� �ڱ� �ڽ��� ȣ���ϴ� �Լ�
	countDown(5);
	
	// �Լ��� �����ϴ� ������ : ��� �Լ��� �Լ��� �ּҸ� �Ű������� �Ѱ��ִ� ��� �����ϰ� ����� �� �ִ�.
	/*
	1. �Լ��� �ּҸ� ��´�.
	2. �Լ��� �����ϴ� �����͸� �����Ѵ�.
	3. �Լ��� �����ϴ� �����͸� ����Ͽ� �� �Լ��� ȣ���Ѵ�.*/
	int (*pf)(int);
	pf = func;

	cout << (*pf)(3) << endl;

	return 0;
}