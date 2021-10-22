#include <stdio.h>

int main (void)

{
	int x = 100;
	printf("현재 x의 값은 %d입니다.\n", x);
	x += 50;
	printf("현재 x의 값은 %d입니다.\n", x);
	x -= 50;
	printf("현재 x의 값은 %d입니다.\n", x);
	x *= 50;
	printf("현재 x의 값은 %d입니다.\n", x);
	x /= 50;
	printf("현재 x의 값은 %d입니다.\n", x); //5000 / 50 = 100
	x %= 3;
	printf("현재 x의 값은 %d입니다.\n", x); // 100을 3으로 나눈 나머지 값  
	
	return 0;
}
