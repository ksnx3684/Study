#include <stdio.h>

int getDays(int month, int day)
{
	int i, sum = 0;
	for(i = 1; i < month; i++)
	{
		if(i == 2) // 2������ ��� 28���� ���Ѵ�. (�� ���α׷��� ������ �������� ����)
		{
			sum += 28;
		}
		else if (i % 2 == 0) // i ��, ���� 2�� ����μ�, �������� 0�̸� 30���� ���� �� .
		{
			sum += 30;
		}
		else // �� �ܴ� 31���� ���Ѵ�. 
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
		if(i == 2) // 2������ ��� 28���� ���Ѵ�. (�� ���α׷��� ������ �������� ����)
		{
			sum += 28;
		}
		else if (i % 2 == 0) // i ��, ���� 2�� ����μ�, �������� 0�̸� 30���� ���� �� .
		{
			sum += 30;
		}
		else // �� �ܴ� 31���� ���Ѵ�. 
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
	printf("%d�� %d�Ϻ��� �ش� ��¥������ �Ⱓ�� %d�� �Դϴ�.\n", start_month, start_day, getDays(month, day) - getStartDays(start_month, start_day));
	
	return 0;
 }
