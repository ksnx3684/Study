#include <iostream>

using namespace std;

/* class 혹은 typeName
template <class Any>
Any sum(Any, Any);
*/
template <class Any>
Any sum(int, Any);
template <class Any>
Any sum(float, Any);

int main() {

	// 함수의 템플릿
	// 구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의

	int a = 3;
	int b = 4;
	cout << sum(a, b) << endl; //템플릿과 오버로딩을 너무 남발하지 말자. 리턴형(변수형)이 중복되어 특정 변수형에는 사용할 수 없는 경우가 발생할 수 있다.

	float c = 3.14l;
	float d = 1.592;
	cout << sum(c, d) << endl;

	cout << sum(a, c) << endl;

	return 0;
}

/*template <class Any>
Any sum(Any a, Any b) {
	return a + b;
}
*/
template <class Any>
Any sum(int a, Any b) {
	return a + b;
}
template <class Any>
Any sum(float a, Any b) {
	return a + b;
}