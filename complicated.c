#include <stdio.h>

int main (void)

{
	int x = 100;
	printf("���� x�� ���� %d�Դϴ�.\n", x);
	x += 50;
	printf("���� x�� ���� %d�Դϴ�.\n", x);
	x -= 50;
	printf("���� x�� ���� %d�Դϴ�.\n", x);
	x *= 50;
	printf("���� x�� ���� %d�Դϴ�.\n", x);
	x /= 50;
	printf("���� x�� ���� %d�Դϴ�.\n", x); //5000 / 50 = 100
	x %= 3;
	printf("���� x�� ���� %d�Դϴ�.\n", x); // 100�� 3���� ���� ������ ��  
	
	return 0;
}
