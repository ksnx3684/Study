#include <stdio.h>

int main (void)

{
	int x = 50, y = 30;
	printf ("x�� y�� ������? %d\n", x == y);
	printf ("x�� y�� �ٸ���? %d\n", x != y);
	printf ("x�� y���� ū��? %d\n", x > y);
	printf ("x�� y���� ������? %d\n", x < y);
	printf ("x�� y���� ������? %d\n", x = y);
	
	if (x == y)
	{
		printf ("��");
	}
	else
	{
		printf ("����");
	}
	
	return 0;
}
