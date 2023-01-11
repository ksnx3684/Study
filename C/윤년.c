#include <stdio.h>

int main (void)

{
	//윤년 -> 4년마다, 하지만 100년 단위일 때에는 윤년에 해당 안됨.
	// 400년 단위일 때에는 어떤 상황이던간에 윤년으로 설정할 것.
	
	int year = 2021;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d는 윤년입니다. \n", year);
	}
	else
	{
		printf("%d는 윤년이 아닙니다. \n", year);
	}

	
	return 0;
}
