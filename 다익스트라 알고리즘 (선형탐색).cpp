#include <stdio.h>

int number = 6;
int INF = 1000000000;

// 전체 그래프를 초기화 
int a[6][6] = {
	{0, 2, 5, 1, INF, INF},
	{2, 0, 3, 2, INF, INF},
	{5, 3, 0, 3, 1, 5},
	{1, 2, 3, 0, 1, INF},
	{INF, INF, 1, 1, 0, 2},
	{INF, INF, 5, INF, 2, 0},
};
bool v[6]; // v = visited (방문한 노드)
int d[6]; // 최단 거리를 저장 

// 가장 최소 거리를 가지는 정점을 반환합니다.
int getSmallIndex()
{
	int min = INF;
	int index = 0;
	for(int i = 0; i < number; i++)
	{
		if(d[i] < min && !v[i])
		{
			min = d[i];
			index = i;
		}
	}
	return index;
}
 
// 다익스트라를 수행하는 함수 
void dijkstra(int start)
{
	for (int i = 0; i < number; i++)
	{
		d[i] = a[start][i];
	}
	v[start] = true;
	for(int i = 0; i < number - 2; i++)
	{
		int current = getSmallIndex();
		v[current] = true; // 방문처리 
		for(int j = 0; j < 6; j++)
		{
			if(!v[j]) // 노드를 방문하지 않았다면 
			{
				if(d[current] + a[current][j] < d[j]) // 이전 까지의 최단거리가 신규 거리보다 크다면 
				{
					d[j] = d[current] + a[current][j]; // 더 작은 값으로 최단 거리를 갱신 
				 } 
			}
		}
	}
}

int main(void)
{
	dijkstra(0);
	for(int i = 0; i < number; i++)
	{
	printf("%d ", d[i]);
	}
}
