#include <stdio.h>

int getDays(int month, int day)
{
	int i, sum = 0;
	for(i = 1; i < month; i++)
	{
		if(i == 2) // 2월달인 경우 28일을 더한다. (이 프로그램은 윤년을 감안하지 않음)
		{
			sum += 28;
		}
		else if (i % 2 == 0) // i 즉, 월을 2로 나누었을 때, 나머지가 0이면 30일을 더한 다 .
		{
			sum += 30;
		}
		else // 그 외는 31일을 더한다. 
		{
			sum += 31; 
		}
	 }
	 return sum + day;
}

int main (void)
{
	int month, day;
	scanf("%d %d", &month, &day);
	printf("1월 1일부터 해당 날짜까지의 기간은 %d일 입니다.\n", getDays(month, day));
	
	return 0;
 }
