#include <iostream>

using namespace std;

int main() {
	// 논리 표현식
	// 논리합, 논리곱, 논리부정 연산자

	int age;
	cout << "당신의 나이를 입력하십시오\n";
	cin >> age;

	if (age < 0 || age > 100){
		cout << "입력이 잘못되었습니다.";
	}
	else if (20 <= age && age <= 29) {
		cout << "당신의 연령층은 20대 입니다." << endl;
	}
	else {
		cout << "당신은 제 또래가 아니시군요" << endl;
	}
	cout << "프로그램이 종료됩니다" << endl;

	return 0;
}