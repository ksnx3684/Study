#include <iostream>

using namespace std;

int main() {
	// ���� ���̸� ���ϴ� ���α׷�;
	//2PIr

	const float PI = 3.1415926535;
	// Có�� �ֻ�ܿ� define���� �����ϸ� ��� block���� ������ ���������� C++������ const��� ��� ���� �Լ��� �̿��ؼ��� ����(���)�� ������ �� �ִ�.
	// ��� const�� �̿��� ���, ����� ��� ���ο����� ��밡���ϴ�.

	int r = 3;
	float s = r * r * PI;

	cout << s << endl;

	// �������� ��ȯ
	/*
	1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
	2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	3. �Լ��� �Ű������� ������ ��
	*/
	
	int a = 3.1415926535;
	cout << a << endl;

	// ���������� �������� ��ȯ
	// typeName(a) (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;
	cout << static_cast<int>(ch) << endl;

	// C++
	//static_cast<typeName>

	return 0;
}