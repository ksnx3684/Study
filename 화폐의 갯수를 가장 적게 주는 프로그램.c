#include <stdio.h>

//특정한 금액을 받아서 가장 적은 거스름 화폐의 갯수를 구하는 함수
// int 반환형. smallest 함수의 이름. (int number) 매개변수.

int smallest (int number)
{
	int count = 0;
	while(number >= 50000)
	{
		number -= 50000;
		count++;
	}
	while(number >= 10000)
	{
		number -= 10000;
		count++;
	}
	while(number >= 5000)
	{
		number -= 5000;
		count++;
	}
	while(number >= 1000)
	{
		number -= 1000;
		count++;
	}
	while(number >= 500)
	{
		number -= 500;
		count++;
	}
	while(number >= 100)
	{
		number -= 100;
		count++;
	}
	while(number >= 50)
	{
		number -= 50;
		count++;
	}
	while(number >= 10)
	{
		number -= 10;
		count++;
	}
	return count;
 } 

int main (void)

{
	int number;
	printf("금액을 입력하세요\n");
	scanf("%d", &number);
	printf("최소로 줄 수 있는 화폐의 갯수는 %d입니다.\n", smallest(number));
	
	return 0;
}
