#include <stdio.h>
#define number 8

int sorted[8]; // 정렬 배열은 반드시 전역 변수로 선언

void merge(int a[], int m, int middle, int n) // m은 시작점 middle은 중간점 n은 끝점 
{
	int i = m;
	int j = middle + 1;
	int k = m;
	
	// 작은 순서대로 배열에 삽입
	while(i <= middle && j <= n)
	{
		if(a[i] <= a[j])
		{
			sorted[k] = a[i];
			i++;
		}
		else
		{
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	
	// 남은 데이터도 삽입 
	if(i > middle)
	{
		for(int t = j; t <= n; t++)
		{
			sorted[k] = a[t];
			k++;
		}
	}
		else
		{
			for(int t = i; t <= middle; t++)
			{
				sorted[k] = a[t];
				k++;
			}
		}
		
	// 정렬된 배열을 삽입
	for(int t = m; t <= n; t++)
	{
		a[t] = sorted[t];
	}
}

void mergeSort(int a[], int m, int n)
{
	// 크기가 1보다 큰 경우
	if(m < n)
	{
		int middle = (m + n) / 2;
		mergeSort(a, m, middle); // left는 왼쪽으로 나눌게 없어질때까지 실행된다 
		mergeSort(a, middle + 1, n); // right는 오른쪽으로 나눌게 없어질때까지 실행된다 
		merge(a, m, middle, n); // right가 끝나면 병합이 실행된다. 
	}
}

/*
1. left가 실행된다 7 6 5 8 -> 7 6 -> 7
2. left가 끝났으니 right가 실행된다 6
3. right가 끝났으니 merge함수가 실행된다. 7과 6을 비교후 6 7로 정렬
4. 정렬될때까지 반복
<순서> 7 6 5 8 -> 7 6 -> 7 -> 6 -> merge(6, 7) -> 5 8 -> 5 -> 8 -> merge(5, 8) -> merge(5, 6, 7 ,8) 
*/

int main (void)
{
	int array[number] = {7, 6, 5, 8, 3, 5, 9, 1};
	mergeSort(array, 0, number - 1);
	for(int i = 0; i < number; i++)
	{
		printf("%d ", array[i]);
	}
	
	return 0;
} 
