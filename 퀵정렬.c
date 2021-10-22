#include <stdio.h>

int number = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3 ,2, 9};

void show()
{
	int i;
	for(i = 0; i < number; i++)
	{
		printf("%d ", data[i]);
	}
} 
	 
void quickSort(int* data, int start, int end) // start는 정렬을 수행하는 그 부분집합의 첫번째값, end는 마지막값 
{
	if(start >= end) // 원소가 한개인 경우 
	{
		return;
	}
		
	int key = start; //피벗 값 
	int i = start + 1;
	int j = end;
	int temp;
		
	while(i <= j) //엇갈릴 때까지 반복 
	{
		while(i <= end && data[i] <= data[key]) //피벗 값보다 큰 값을 만날 때 까지 오른쪽으로 탐색 
		{
			i++;
		}
		while(j > start && data[j] >= data[key]) //피벗 값보다 작은 값을 만날 때 까지 왼쪽으로 탐색 
		{
			j--;
		}
		if(i > j) // 엇갈린 상태면 피벗 값과 교체 
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else
		{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}
	
int main(void)
{
	quickSort(data, 0, number - 1);
	show();
	
	return 0;
}
