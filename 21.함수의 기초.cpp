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
	1. �Լ� ���� ����
	2. �Լ� ���� ����
	3. �Լ� ȣ��
	- ���� ���� �ִ� Ÿ��
	typeName functionName(parameterList)
	{
		statement(s);
		return value; >> typeName�� value�� ������ ������ ���ƾ� �Ѵ�.
	}
	- ���� ���� ���� Ÿ��
	void functionName(parameterList)
	{
		statement(s);
		return; // ������ �� ����
	*/

	int a;
	cout << "�ϳ��� ���� �Է��Ͻʽÿ�." << endl;
	cin >> a;
	cheers(a);

	int b;
	cout << "���� ������ ���̸� �Է��Ͻʽÿ�." << endl;
	cin >> b;
	float c = circle(b);
	cout << "���� ���̴� " << c << "�Դϴ�." << endl;
}