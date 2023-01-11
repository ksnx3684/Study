#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 7;
int c[7];
vector<int> a[8];

void bfs(int start)
{
	queue<int> q;
	q.push(start);
	c[start] = true;
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << ' ';
		for(int i = 0; i < a[x].size(); i++)
		{
			int y = a[x][i];
			if(!c[y])
			{
				q.push(y);
				c[y] = true;
			}
		}
	}
}

int main(void)
{
	a[1].push_back(2); // 1과 2를 연결
	a[2].push_back(1);
	
	a[1].push_back(3); // 1과 3를 연결
	a[3].push_back(1);
	
	a[2].push_back(3); // 2과 3를 연결
	a[3].push_back(2);
	
	a[2].push_back(4); // 2과 4를 연결
	a[4].push_back(2);
	
	a[2].push_back(5); // 2과 5를 연결
	a[5].push_back(2);
	
	a[3].push_back(6); // 3과 6를 연결
	a[6].push_back(3);
	
	a[3].push_back(7); // 3과 7를 연결
	a[7].push_back(3);
	
	a[4].push_back(5); // 4과 5를 연결
	a[5].push_back(1);
	
	a[6].push_back(7); // 6과 7를 연결
	a[7].push_back(6);
	
	bfs(1);
	
	return 0; 	
}
