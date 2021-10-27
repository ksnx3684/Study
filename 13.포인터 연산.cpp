#include <iostream>
#include <string.h>
#define SIZE 20

using namespace std;

struct MyStruct
{
	char name[20];
	int age;
};

int main() {

	char animal[SIZE];
	char* ps;

	cout << "동물 이름을 입력하십시오\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1];
	strcpy_s(ps, strlen(animal) + 1, animal);
	// 최신 버전의 visual studio에선 strcpy를 쓰면 안정성이 떨어진다고 하면서 코드 실행이 되지 않는다. strcpy_s를 쓰도록하자.
	// 정 쓰고 싶으면 #define _CRT_SECURE_NO_WARNINGS를 입력해주자.

	cout << "입력하신 동물 이름을 복사하였습니다" << endl;
	cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다." << endl;
	cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;

	delete[] ps;


	// 동적 구조체 생성 (동적 구조체에서 멤버에 접근하기 위해서는 "."를 이용해서 가능하지만 일반적으로 "->"를 이용한다. 
	// temp* ps = new temp;
	MyStruct* temp = new MyStruct;

	cout << "당신의 이름을 입력하십시오\n";
	cin >> temp->name;

	cout << "당신의 나이를 입력하십시오\n";
	cin >> (*temp).age;

	cout << "안녕하세요! " << temp->name << "씨\n";
	cout << "당신은 " << temp->age << "살 입니다.";

	return 0;
}