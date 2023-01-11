#include <iostream>
#include <limits>

using namespace std;

const int SIZE = 30;

int main() {
	// switch 구문
	int a;
	cout << "1, 2, 3 중 하나를 입력하십시오.\n";
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "입력하신 값은 1입니다.\n";
		break;
	case 2:
		cout << "입력하신 값은 2입니다.\n";
		break;
	case 3:
		cout << "입력하신 값은 3입니다.\n";
		break;
	default:
		cout << "1, 2, 3 이외의 값을 입력하셨습니다.\n";
		break;
	}
	// 반복문에도 break 구문을 사용할 수 있다.
	int i = 1;
	while (true) {
		cout << "i의 값은 " << i << " 입니다." << endl;
		if (i >= 10) {
			break;
		}
		i++;
	}

	cout << "30자 이하의 문장을 입력하십시오.\n";
	char line[SIZE];
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	// 위에서 cin함수로 data를 입력받았을때 null 문자값이 버퍼에 추가되었기 때문에 이를 해제해줘야 cin.get 함수가 정상동작 한다.
	cin.get(line, SIZE);
	cout << "입력하신 문장은 다음과 같습니다.\n";
	int space = 0;
	for (int j = 0; line[j] != '\0'; j++) {
		cout << line[j];
		if (line[j] != ' ')
			space++;
			continue;
		
	}
	cout << "입력하신 문장에서 공백을 제외한 문자 수는 " << space << "개 입니다.\n";

	cout << "프로그램이 종료됩니다." << endl;

	return 0;
}