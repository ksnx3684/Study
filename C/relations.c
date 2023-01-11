#include <stdio.h>

int main (void)

{
	int x = 50, y = 30;
	printf ("x가 y와 같은가? %d\n", x == y);
	printf ("x가 y와 다른가? %d\n", x != y);
	printf ("x가 y보다 큰가? %d\n", x > y);
	printf ("x가 y보다 작은가? %d\n", x < y);
	printf ("x에 y값을 넣으면? %d\n", x = y);
	
	if (x == y)
	{
		printf ("참");
	}
	else
	{
		printf ("거짓");
	}
	
	return 0;
}
