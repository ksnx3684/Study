#include <iostream>
#include "time.h"

using namespace std;

int main() {

	/*
	1. ������ Ŭ������ ���ο� ����� �߰��� �� �ִ�.
	2. Ŭ������ ��Ÿ���� �ִ� �����Ϳ� �ٸ� ���� �� �߰��� �� �ִ�.
	3. Ŭ���� �޼��尡 �����ϴ� ����� ������ �� �ִ�.
	*/

	NewTime temp1();
	NewTime temp2(3, 30, 2);
	temp2.print();

	return 0;
}

