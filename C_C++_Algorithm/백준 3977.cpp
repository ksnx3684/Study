#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#define MAX 100001

using namespace std;

int n, m;
int id, d[MAX]; // 각 노드마다 고유한 번호를 가질 수 있게 해주는 변수 
bool finished[MAX]; // 처리가 된 노드를 저장하는 변수 
vector<int> a[MAX]; // 모든 정점에 대해서 연결이 되어있는 인접한 노드를 담을 수 있는 변수 
vector<vector<int> > SCC; // 하나의 강한 결합요소에 담기는 모든 정점들을 2차원 배열형태로 담을 수 있는 곳.
stack<int> s;
int group[MAX];
bool inDegree[MAX]; // 각 정점의 진입차수가 몇인지 기록할 수 있는 변수 
vector<int> result;

// 항상 처음 방문하는 노드만 실행. 즉, N번 수행 
int dfs(int x)
{
	d[x] = ++id;
	s.push(x);
	
	int result = d[x];
	for(int i = 0; i < a[x].size(); i++)
	{
		int y = a[x][i];
		// 아직 방문 하지 않은 이웃  노드인 경우
		if(d[y] == 0) result = min(result, dfs(y));
		// 방문은 했지만 아직 처리 중인 이웃 노드인 경우 
		else if(!finished[y]) result = min(result, d[y]);
	}
	
	// 부모 노드가 자기 자신인 경우 SCC를 형성한다.
	if(result == d[x])
	{
		vector<int> scc;
		while(1)
		{
			int t = s.top();
			s.pop();
			scc.push_back(t);
			group[t] = SCC.size() + 1; 
			finished[t] = true;
			if(t == x) break;
		}
		SCC.push_back(scc);
	 } 
	 
	 // 자신의 부모값을 반환합니다.
	 return result; 
}

int main(void)
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		SCC.clear();
		fill(d, d + MAX, 0);
		fill(finished, finished + MAX, 0);
		fill(inDegree, inDegree + MAX, false);
		result.clear();
		scanf("%d %d", &n, &m);
		for(int i = 1; i <= n; i++)
		{
			a[i].clear();
		}
		for(int i = 0; i < m; i++)
		{
			int x, y;
			scanf("%d %d", &x, &y);
			a[x + 1].push_back(y + 1);
		}
		for(int i = 1; i <= n; i++)
		{
			if(d[i] == 0) dfs(i);
		}
		for(int i = 1; i <= n; i++)
		{
			for(int j = 0; j < a[i].size(); j++)
			{
				int y = a[i][j];
				if(group[i] != group[y])
				{
					inDegree[group[y]] = true;
				}
			}
		}
		int count = 0;
		for(int i = 0; i < SCC.size(); i++)
		{
			if(!inDegree[i + 1])
			{
				count++;
				for(int j = 0; j < SCC[i].size(); j++)
				{
					result.push_back(SCC[i][j] - 1);
				}
			}
		}
		sort(result.begin(), result.end());
		if(count != 1)
		{
			printf("Confused\n\n");
		}
		else
		{
			for(int i = 0; i < result.size(); i++)
			{
				printf("%d\n", result[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
