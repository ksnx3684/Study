#include <stdio.h>
#include <stdlib.h>


int main (void)

{
	int *pi; // pointer integer
	pi = (int *)malloc(sizeof(int)); // malloc = �޸𸮸� �Ҵ��ض�. sizeof(int) = int���� ������ ��ŭ(int��� ���ڸ� �־ ����)
	// pi���ٰ� intũ�� ��ŭ�� �޸𸮸� �Ҵ��� �ּҸ� ����ض�. 
	if(pi == NULL)
	{
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	} 
	*pi = 100;
	printf("%d\n", *pi);
	// ���� �޸𸮸� ����� ���Ŀ��� �ݵ�� �ش� �޸𸮸� ��ȯ�ؾ� �Ѵ�.
	// �׷��� ������, ��ü������ �ý����� ������, ȿ������ �������� �ý��� �ڿ��� ��ƸԴ´�. 
	free(pi);
	
		
	return 0;
}
