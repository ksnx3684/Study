#include <iostream>
#include <cstring> // strlen �Լ��� ����ϱ� ���� ���̺귯�� �߰�

using namespace std;

int main() {

	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programming"; // string name2 = "C++programming";���� �����ص� �ȴ�.

	cout << "�ȳ��ϼ��� " << name2 << "�Դϴ� ����� �̸��� �����Դϱ�?\n";
	//cin >> name1;
	cin.get(name1, Size);
	cout << name1 << "��, �ȳ��ϼ��� ����� �̸��� ";
	cout << strlen(name1) << " �� �Դϴ�.\n";
	cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�.\n";
	cout << "�̸���" << name1[0] << "�ڷ� ���۵˴ϴ�.\n";
	name2[3] = '\0';
	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�.";
	cout << name2 << endl;

	/* Stirng
	C�� ���������� string ��ü�� �ʱ�ȭ �� �� �ִ�.
	cin�� ����Ͽ� string ��ü�� Ű���� �Է��� ������ �� �ִ�./
	cout�� ����Ͽ� string ��ü�� ���÷��� �� �� �ִ�.
	�迭 ǥ�⸦ ����Ͽ� string ��ü�� ����Ǿ� �ִ� �������� ���ڵ鿡 ������ �� �ִ�.*/
	char char1[20];
	char char2[20] = "lee byeong hun";
	string str1;
	string str2 = "pig";
	//char1 = char2; //Ʋ����
	str1 = str2; // �´�
	cout << str1 << endl;

	return 0;
}