#include <iostream>

using namespace std;

int main() {
	// �� ǥ����
	// ����, ����, ������ ������

	int age;
	cout << "����� ���̸� �Է��Ͻʽÿ�\n";
	cin >> age;

	if (age < 0 || age > 100){
		cout << "�Է��� �߸��Ǿ����ϴ�.";
	}
	else if (20 <= age && age <= 29) {
		cout << "����� �������� 20�� �Դϴ�." << endl;
	}
	else {
		cout << "����� �� �Ƿ��� �ƴϽñ���" << endl;
	}
	cout << "���α׷��� ����˴ϴ�" << endl;

	return 0;
}