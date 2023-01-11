#include <iostream>

using namespace std;

int main() {
	
	// 구조체 : 다른 데이터형이 허용되는 데이터의 집합
	// cf) 배열 : 같은 데이터형의 집합
	
	// 축구선수
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

	// 구조체를 배열처럼 정의할 수 있다.
	MyStruct C[2] = {
		{"A", "a", 1, 1},
		{"B", "b", 2, 2}
	};
	cout << C[0].height << endl;

	return 0;
}