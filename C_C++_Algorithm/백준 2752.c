#include <stdio.h>

int array[1000001];

int main(void)
{
	int i, j, temp;
	for(i = 0; i < 3; i++)
	{
		scanf("%d", &array[i]);
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 2 - i; j++)
		{
			if(array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j +1];
				array[j + 1] = temp;
			}
		}			
	}
	for(i = 0; i < 3; i++)
	{
		printf("%d ", array[i]);
	 } 
	
	return 0;
}
