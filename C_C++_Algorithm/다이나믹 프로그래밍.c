#include <stdio.h>

int d[100]; // 결과를 담을 수 있는 배열 

int dp(int x)
{
	if(x == 1)
	{
		return 1;
	}
	if(x == 2)
	{
		return 1;
	}
	if(d[x] != 0) // 이미 구한 값이라면 구한 값 자체를 반환 할 수 있는 함수 
	{
		return d[x];
	}
	return d[x] = dp(x - 1) + dp(x - 2); // 피보나치 수열의 원리 1 1 2 3 5 8 13 21....
	// 이미 구한 값을 이전 값과 전전 값을 더하게 개선  해줌으로서 불필요한 연산을 방지하고 연산 속도를 빠르게 해준다. 
}

int main(void)
{
	printf("%d", dp(40));
}
