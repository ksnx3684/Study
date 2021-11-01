#include <iostream>

using namespace std;

void swapA(int&, int&); // ����
void swapB(int*, int*); // ������
void swapC(int, int); // ��

int main() {

	// ����(reference)��? : �̸� ���� �� ������ ���� �̸� ��� ����� �� �ִ� ��� �̸�
	// �Լ��� �Ű������� ����ϴµ��� ������ �ִ�.
	// ����ü�ʹ� �ٸ��� �Լ��� �Ű������� ������ �����ϸ� ������ �����͸� ������ �۾��� �Ѵ�. (����ü�� ���纻�� �����, ����ӵ� �鿡 �־�� ������ �� �����ϴ�.)
	
	int y;
	int& z = y; // & : �ּҿ�����, ����������

	int wallet1 = 100;
	int wallet2 = 200;

	cout << "���� ����" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << "\n" << endl;

	cout << "������ �̿��� ���� ��ȯ\n";
	swapA(wallet1, wallet2);
	cout << "���� ��ȯ ���� ����\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << "\n" << endl;

	cout << "�����͸� �̿��� ���� ��ȯ\n";
	swapB(&wallet1, &wallet2);
	cout << "������ ��ȯ ���� ����\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << "\n" << endl;

	cout << "���� �̿��� ���� ��ȯ\n";
	swapC(wallet1, wallet2);
	cout << "�� ��ȯ ���� ����\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << "\n" << endl;

	return 0;
}

// ������ �����ϴ� ���
void swapA(int& a, int& b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}

// �����ͷ� �����ϴ� ���
void swapB(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// ������ �����ϴ� ��� (���纻�� ���� ���� �����ϱ� ������ �������� �ٲ��� �����Ƿ� swap�� �Ͼ�� �ʾҴ�)
void swapC(int a, int b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}