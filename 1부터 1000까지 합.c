#include <stdio.h>

int main(void)
{
	int i = 1, sum = 0;
	while(i <= 1000)
    {
    	sum = sum + i;
    	i++;
    	
    }

	printf("1부터 1000까지의 합은 %d입니다.\n", sum);



	{	int sumx = 0;
		for(int x = 1; x <= 1000; x++)
		{
			sumx = sumx + x;
			printf ("%d\n" , sumx);
		}
	
			return 0;
	}

}
