#include <iostream>
#include "Stock.h"

int main() {
	// Ŭ���� : �߻�ȭ�� ����� ���� ������������ ��ȯ���ִ� ����
	// �߻�ȭ : ��� ��ü�� ��������� ǥ���ϴ� ���� �ƴ϶�, ����� Ư¡�� ������ �������, �����ϱ� ���� ǥ���ϴ� ��
	Stock temp;
	temp.acquire("LBH", 100, 1000);
	temp.show();
	temp.buy(10, 1200);
	temp.show();
	temp.sell(5, 800);
	temp.show();

	return 0;
}