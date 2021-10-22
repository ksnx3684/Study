#include <stdio.h>
#include <stdlib.h>

int main (void)

{
	int i, x, y;
	int** pptr = (int**)malloc(sizeof(int*) * 8);
	
	for(i = 0; i < 8; i++) // 2차원 배열의 메모리 할당
	{
		*(pptr + i) = (int *)malloc(sizeof(int) * 6);
	}
	
	for(y = 0; y < 8; y++) // 메모리 초기화
	{
		for(x = 0; x < 6; x++)
		{
			*(*(pptr + y) + x) = 6 * y + x;
		}
	}
	
	for(y = 0; y < 8; y++) // 출력 
	{
		for(x = 0; x < 6; x++)
		{
			printf("%3d", *(*(pptr + y) + x));
		}
		printf("\n");
	}
	
	for (y = 0; y < 8; y++) // 각 배열씩 메모리 할당 해제 
	{
		free(*(pptr + y));
	}
	
	return 0;
}
