#include <stdio.h>

int main (void)

{
	int score = 85; // �л��� ������ �ǹ�
	
	if (score >= 90)
	{
		printf("����� ������ A�Դϴ�.\n");
		
	 } 
	 
	else if (score >= 80) 
	{
		printf("����� ������ B�Դϴ�.\n ");
	}
	
	else if (score >= 70)
	{
		printf("����� ������ C�Դϴ�.\n");
	}
	else
	{
		printf("����� �����߽��ϴ�.\n");
	}
	
	return 0;
}
