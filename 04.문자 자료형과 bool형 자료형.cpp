#include <iostream>

using namespace std;

int main() {
	//char : ���� ������
	int a = 77;
	char b = a;
	// c++���� null ���� '\0'�� �ۼ��Ͽ� �������� ����� �����Ѵ�.
	// "" ���� ��������� null���ڰ� ���ԵǾ����� (Stirng��) ���� ''�� ����Ѵ�.
	cout << b << endl;

	char c = 'A';
	cout << c << endl;

	//bool : 0 Ȥ�� 1, false Ȥ�� true
	bool d = 0;
	bool e = 1;
	bool f = 10;

	cout << d << " " << e << " " << f << endl;

	return 0;
}