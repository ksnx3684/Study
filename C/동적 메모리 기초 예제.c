#include <stdio.h>
#include <stdlib.h>


int main (void)

{
	int *pi; // pointer integer
	pi = (int *)malloc(sizeof(int)); // malloc = 메모리를 할당해라. sizeof(int) = int형의 사이즈 만큼(int대신 숫자를 넣어도 무방)
	// pi에다가 int크기 만큼의 메모리를 할당한 주소를 기억해라. 
	if(pi == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	} 
	*pi = 100;
	printf("%d\n", *pi);
	// 동적 메모리를 사용한 이후에는 반드시 해당 메모리를 반환해야 한다.
	// 그렇지 않으면, 전체적으로 시스템의 안정성, 효율성이 떨어지고 시스템 자원을 잡아먹는다. 
	free(pi);
	
		
	return 0;
}
