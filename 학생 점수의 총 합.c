#include<stdio.h>

int main (void)

{
	int score[5][2];
	int total[2] = { 0, };
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("%d번 학생의 수학, 영어 점수 : ", i + 1); //i + 1을 하는 이유는 그냥 i로 해버리면 0번 학생의 ~하면서 나오기 때문 
		scanf("%d %d", &score[i][0], &score[i][1]);
		
	}
	
	for(i = 0; i < 5; i++)
	{
		total[0] += score[i][0]; //수학 점수 
		total[1] += score[i][1]; //영어 점수 
	
	}
	
	printf("\n\n5명의 수학 점수 합계 : %d\n", total[0]);
	printf("5명의 영어 점수 합계 : %d\n", total[1]);
	return 0;
}
