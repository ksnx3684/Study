#include <iostream>
#include <limits>

using namespace std;

const int SIZE = 30;

int main() {
	// switch ����
	int a;
	cout << "1, 2, 3 �� �ϳ��� �Է��Ͻʽÿ�.\n";
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "�Է��Ͻ� ���� 1�Դϴ�.\n";
		break;
	case 2:
		cout << "�Է��Ͻ� ���� 2�Դϴ�.\n";
		break;
	case 3:
		cout << "�Է��Ͻ� ���� 3�Դϴ�.\n";
		break;
	default:
		cout << "1, 2, 3 �̿��� ���� �Է��ϼ̽��ϴ�.\n";
		break;
	}
	// �ݺ������� break ������ ����� �� �ִ�.
	int i = 1;
	while (true) {
		cout << "i�� ���� " << i << " �Դϴ�." << endl;
		if (i >= 10) {
			break;
		}
		i++;
	}

	cout << "30�� ������ ������ �Է��Ͻʽÿ�.\n";
	char line[SIZE];
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	// ������ cin�Լ��� data�� �Է¹޾����� null ���ڰ��� ���ۿ� �߰��Ǿ��� ������ �̸� ��������� cin.get �Լ��� ������ �Ѵ�.
	cin.get(line, SIZE);
	cout << "�Է��Ͻ� ������ ������ �����ϴ�.\n";
	int space = 0;
	for (int j = 0; line[j] != '\0'; j++) {
		cout << line[j];
		if (line[j] != ' ')
			space++;
			continue;
		
	}
	cout << "�Է��Ͻ� ���忡�� ������ ������ ���� ���� " << space << "�� �Դϴ�.\n";

	cout << "���α׷��� ����˴ϴ�." << endl;

	return 0;
}