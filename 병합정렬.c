#include <stdio.h>
#define number 8

int sorted[8]; // ���� �迭�� �ݵ�� ���� ������ ����

void merge(int a[], int m, int middle, int n) // m�� ������ middle�� �߰��� n�� ���� 
{
	int i = m;
	int j = middle + 1;
	int k = m;
	
	// ���� ������� �迭�� ����
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
	
	// ���� �����͵� ���� 
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
		
	// ���ĵ� �迭�� ����
	for(int t = m; t <= n; t++)
	{
		a[t] = sorted[t];
	}
}

void mergeSort(int a[], int m, int n)
{
	// ũ�Ⱑ 1���� ū ���
	if(m < n)
	{
		int middle = (m + n) / 2;
		mergeSort(a, m, middle); // left�� �������� ������ ������������ ����ȴ� 
		mergeSort(a, middle + 1, n); // right�� ���������� ������ ������������ ����ȴ� 
		merge(a, m, middle, n); // right�� ������ ������ ����ȴ�. 
	}
}

/*
1. left�� ����ȴ� 7 6 5 8 -> 7 6 -> 7
2. left�� �������� right�� ����ȴ� 6
3. right�� �������� merge�Լ��� ����ȴ�. 7�� 6�� ���� 6 7�� ����
4. ���ĵɶ����� �ݺ�
<����> 7 6 5 8 -> 7 6 -> 7 -> 6 -> merge(6, 7) -> 5 8 -> 5 -> 8 -> merge(5, 8) -> merge(5, 6, 7 ,8) 
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
