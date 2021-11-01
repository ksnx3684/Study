#include <iostream>

using namespace std;

void swapA(int&, int&); // 참조
void swapB(int*, int*); // 포인터
void swapC(int, int); // 값

int main() {

	// 참조(reference)란? : 미리 정의 된 변수의 실제 이름 대신 사용할 수 있는 대용 이름
	// 함수의 매개변수에 사용하는데에 목적이 있다.
	// 구조체와는 다르게 함수의 매개변수에 참조를 선언하면 원본의 데이터를 가지고 작업을 한다. (구조체는 복사본을 만드며, 실행속도 면에 있어서는 참조가 더 유리하다.)
	
	int y;
	int& z = y; // & : 주소연산자, 참조연산자

	int wallet1 = 100;
	int wallet2 = 200;

	cout << "최초 상태" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << "\n" << endl;

	cout << "참조를 이용한 값의 교환\n";
	swapA(wallet1, wallet2);
	cout << "참조 교환 이후 상태\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << "\n" << endl;

	cout << "포인터를 이용한 값의 교환\n";
	swapB(&wallet1, &wallet2);
	cout << "포인터 교환 이후 상태\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << "\n" << endl;

	cout << "값을 이용한 값의 교환\n";
	swapC(wallet1, wallet2);
	cout << "값 교환 이후 상태\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << "\n" << endl;

	return 0;
}

// 참조로 전달하는 방식
void swapA(int& a, int& b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}

// 포인터로 전달하는 방식
void swapB(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// 값으로 전달하는 방식 (복사본을 만들어서 값을 전달하기 때문에 원본값이 바뀌지 않으므로 swap이 일어나지 않았다)
void swapC(int a, int b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}