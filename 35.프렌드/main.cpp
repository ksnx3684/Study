#include <iostream>
#include "time.h"

using namespace std;

int main() {
	// ���� ������ : �� ���� �ǿ����ڸ� �䱸�ϴ� ������
	//operator*
	Time t1(1, 20);
	Time t2;

	t2 = 3 * t1;
	// t2 = operator*(3, t1);
	t2.show();

	return 0;
}
