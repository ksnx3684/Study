#include <iostream>

using namespace std;

int main() {

	// while�� : ������ �˻��ϰ� �ݺ��� ����

	string str = "Panda";
	int i = 0;
	while (str[i] != '\0') {
		cout << str[i] << endl;
		i++;
	}

	int j = 0;
	// do while �� : �ݺ��� �����ϰ� ������ �˻�. while ���ȿ� boolean�� false���� �ݺ����� �ּ� 1ȸ ����ȴ�.
	do {
		cout << "while�� �Դϴ�.\n";
		j++;
	} while (j < 3);

	return 0;
}