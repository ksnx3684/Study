#include <stdio.h>

int main(void)
{
	int i = 1, sum = 0;
	while(i <= 1000)
    {
    	sum = sum + i;
    	i++;
    	
    }

	printf("1���� 1000������ ���� %d�Դϴ�.\n", sum);



	{	int sumx = 0;
		for(int x = 1; x <= 1000; x++)
		{
			sumx = sumx + x;
			printf ("%d\n" , sumx);
		}
	
			return 0;
	}

}
