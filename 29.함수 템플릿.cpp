#include <iostream>

using namespace std;

/* class Ȥ�� typeName
template <class Any>
Any sum(Any, Any);
*/
template <class Any>
Any sum(int, Any);
template <class Any>
Any sum(float, Any);

int main() {

	// �Լ��� ���ø�
	// ��ü���� ���������� ������ �� �ִ� �Ϲ������� �Լ��� ����

	int a = 3;
	int b = 4;
	cout << sum(a, b) << endl; //���ø��� �����ε��� �ʹ� �������� ����. ������(������)�� �ߺ��Ǿ� Ư�� ���������� ����� �� ���� ��찡 �߻��� �� �ִ�.

	float c = 3.14l;
	float d = 1.592;
	cout << sum(c, d) << endl;

	cout << sum(a, c) << endl;

	return 0;
}

/*template <class Any>
Any sum(Any a, Any b) {
	return a + b;
}
*/
template <class Any>
Any sum(int a, Any b) {
	return a + b;
}
template <class Any>
Any sum(float a, Any b) {
	return a + b;
}