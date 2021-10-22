#include <iostream>
#include <vector>
#define MAX 1001
 
using namespace std;

vector<int> a[MAX];
int d[MAX];
bool c[MAX];
int n, m, s, k; //n : 소의 마리수, m : 축사의 갯수, s : 각각의 소들이 몇개의 축사를 원하는지의 정보  

// 매칭에 성공한 경우 True, 실패한 경우 False 
bool dfs(int x)
{
	// 연결된 모든 노드에 대해서 들어갈 수 있는지 시도 
	for(int i = 0; i < a[x].size(); i++)
	{
		int t = a[x][i];
		// 이미 처리한 노드는 더 이상 볼 필요가 없음
		if(c[t]) continue;
		c[t] = true;
		// 비어있거나 점유 노드에 더 들어갈 공간이 있는 경우 
		if(d[t] == 0 || dfs(d[t]))
		{
			d[t] = x;
			return true; 
		}
	}
	return false;
}

int main(void)
{
	scanf("%d %d %d", &n, &m, &k);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &s);
		for(int j = 1; j <= s; j++)
		{
		int t;
		scanf("%d", &t);
		a[i].push_back(t); // 특정 소가 어떤 축사에 들어갈지 정보를 담을 수 있는 곳. 
		}
	}
	int count = 0;
	for(int i = 1; i <= n; i++)
	{
		// 최대의 우겨 넣는다.
		fill(c, c + MAX, false); // 한번의 단위 이분매칭을 수행할 때 마다 fill 함수를 이용하여 c 배열변수를 초기화한다. 
		if(dfs(i)) count++; // dfs를 수행해서 특정한 소에 대해서 이분매칭이 이루어졌다면 count값을 1 증가한다. 
	 }
	 // 두번씩 작업할 수 있는 사람을 추가적으로 계산한다.
	 int extra = 0;
	 for(int i = 1; i <= n && extra < k; i++)
	 {
	 	fill(c, c + MAX, false);
	 	if(dfs(i)) extra++;
	  } 
	 printf("%d\n", count + extra);
	 return 0;
}
