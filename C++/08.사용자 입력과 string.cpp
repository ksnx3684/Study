#include <iostream>
#include <cstring> // strlen 함수를 사용하기 위해 라이브러리 추가

using namespace std;

int main() {

	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programming"; // string name2 = "C++programming";으로 선언해도 된다.

	cout << "안녕하세요 " << name2 << "입니다 당신의 이름은 무엇입니까?\n";
	//cin >> name1;
	cin.get(name1, Size);
	cout << name1 << "씨, 안녕하세요 당신의 이름은 ";
	cout << strlen(name1) << " 자 입니다.\n";
	cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다.\n";
	cout << "이름이" << name1[0] << "자로 시작됩니다.\n";
	name2[3] = '\0';
	cout << "제 이름의 처음 세 문자는 다음과 같습니다.";
	cout << name2 << endl;

	/* Stirng
	C와 마찬가지로 string 객체를 초기화 할 수 있다.
	cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다./
	cout을 사용하여 string 객체를 디스플레이 할 수 있다.
	배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.*/
	char char1[20];
	char char2[20] = "lee byeong hun";
	string str1;
	string str2 = "pig";
	//char1 = char2; //틀리다
	str1 = str2; // 맞다
	cout << str1 << endl;

	return 0;
}