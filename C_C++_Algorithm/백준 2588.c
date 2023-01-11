#include <stdio.h>

int main(void)

{
	int a, b1, b2, b3;
	scanf("%d\n", &a);
	scanf("%1d %1d %1d", &b1, &b2, &b3);
	
	printf("%d\n", a * b3);
	printf("%d\n", a * b2);
	printf("%d\n", a * b1);
	printf("%d\n", a * b1 * 100 + a * b2 * 10 + a * b3);
	
	return 0;
}
