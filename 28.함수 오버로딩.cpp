#include <iostream>

using namespace std;

int sum(int, int);
float sum(float, float);

int main() {

	// �Լ��� ���� : �Լ��� �پ��� ����
	// �Լ��� �����ε� : �������� �Լ��� ���� �̸����� �����Ѵ�.

	/* �Լ��� �����ε��� ����� �� ���� ���
	1. �Լ��� �������� �ٸ� ���
	2. �Լ��� ����� ��, �� �� �̻��� �Լ��� �����Ǵ� ���
	*/

	cout << "�� ������ �Է��Ͻʽÿ�.\n";
	int a, b;
	cin >> a >> b;
	cout << "�� ������ ���� " << sum(a, b) << "�Դϴ�.\n";
	cout << "�� �Ǽ��� �Է��Ͻʽÿ�.\n";
	float c, d;
	cin >> c >> d;
	cout << "�� �Ǽ��� ���� " << sum(c, d) << "�Դϴ�.\n";

	return 0;
}

int sum(int a, int b) {
	return a + b;
}
float sum(float a, float b) {
	return a + b;
}