#include <iostream>

using namespace std;

int main() {

	// while문 : 조건을 검사하고 반복문 실행

	string str = "Panda";
	int i = 0;
	while (str[i] != '\0') {
		cout << str[i] << endl;
		i++;
	}

	int j = 0;
	// do while 문 : 반복을 실행하고 조건을 검사. while 문안에 boolean이 false여도 반복문이 최소 1회 실행된다.
	do {
		cout << "while문 입니다.\n";
		j++;
	} while (j < 3);

	return 0;
}