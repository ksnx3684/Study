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
		else if (i % 2 == 0) // i ��, ���� 2�� �������� ��, �������� 0�̸� 30���� ���� �� .
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

int main (void)
{
	int month, day;
	scanf("%d %d", &month, &day);
	printf("1�� 1�Ϻ��� �ش� ��¥������ �Ⱓ�� %d�� �Դϴ�.\n", getDays(month, day));
	
	return 0;
 }
