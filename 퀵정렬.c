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
	 
void quickSort(int* data, int start, int end) // start�� ������ �����ϴ� �� �κ������� ù��°��, end�� �������� 
{
	if(start >= end) // ���Ұ� �Ѱ��� ��� 
	{
		return;
	}
		
	int key = start; //�ǹ� �� 
	int i = start + 1;
	int j = end;
	int temp;
		
	while(i <= j) //������ ������ �ݺ� 
	{
		while(i <= end && data[i] <= data[key]) //�ǹ� ������ ū ���� ���� �� ���� ���������� Ž�� 
		{
			i++;
		}
		while(j > start && data[j] >= data[key]) //�ǹ� ������ ���� ���� ���� �� ���� �������� Ž�� 
		{
			j--;
		}
		if(i > j) // ������ ���¸� �ǹ� ���� ��ü 
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
