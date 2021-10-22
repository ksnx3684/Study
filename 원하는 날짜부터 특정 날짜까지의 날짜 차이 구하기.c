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
		else if (i % 2 == 0) // i 즉, 월이 2의 배수로서, 나머지가 0이면 30일을 더한 다 .
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

int getStartDays(int start_month, int start_day)
{
	int i, sum = 0;
	for(i = 1; i < start_month; i++)
	{
		if(i == 2) // 2월달인 경우 28일을 더한다. (이 프로그램은 윤년을 감안하지 않음)
		{
			sum += 28;
		}
		else if (i % 2 == 0) // i 즉, 월이 2의 배수로서, 나머지가 0이면 30일을 더한 다 .
		{
			sum += 30;
		}
		else // 그 외는 31일을 더한다. 
		{
			sum += 31;
		}
	 }
	 return sum + start_day;
}

int main (void)
{
	int start_month, start_day; 
	int month, day;
	scanf("%d %d", &start_month, &start_day);
	scanf("%d %d", &month, &day);
	printf("%d월 %d일부터 해당 날짜까지의 기간은 %d일 입니다.\n", start_month, start_day, getDays(month, day) - getStartDays(start_month, start_day));
	
	return 0;
 }
