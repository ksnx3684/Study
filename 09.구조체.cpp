#include <iostream>

using namespace std;

int main() {
	
	// ����ü : �ٸ� ���������� ���Ǵ� �������� ����
	// cf) �迭 : ���� ���������� ����
	
	// �౸����
	struct MyStruct
	{
		string name;
		string position;
		int height;
		int weight;
	} B;
	
	MyStruct A = {
		"Lee Byeonghun",
		"Striker",
		183,
		77
	};

	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;

	B = {
		
	};
	
	cout << B.height << endl;

	// ����ü�� �迭ó�� ������ �� �ִ�.
	MyStruct C[2] = {
		{"A", "a", 1, 1},
		{"B", "b", 2, 2}
	};
	cout << C[0].height << endl;

	return 0;
}