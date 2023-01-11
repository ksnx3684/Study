#include <iostream>
#include <vector>
#define MAX 1001
 
using namespace std;

vector<int> a[MAX];
int d[MAX];
bool c[MAX];
int n, m, s, k; //n : ���� ������, m : ����� ����, s : ������ �ҵ��� ��� ��縦 ���ϴ����� ����  

// ��Ī�� ������ ��� True, ������ ��� False 
bool dfs(int x)
{
	// ����� ��� ��忡 ���ؼ� �� �� �ִ��� �õ� 
	for(int i = 0; i < a[x].size(); i++)
	{
		int t = a[x][i];
		// �̹� ó���� ���� �� �̻� �� �ʿ䰡 ����
		if(c[t]) continue;
		c[t] = true;
		// ����ְų� ���� ��忡 �� �� ������ �ִ� ��� 
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
		a[i].push_back(t); // Ư�� �Ұ� � ��翡 ���� ������ ���� �� �ִ� ��. 
		}
	}
	int count = 0;
	for(int i = 1; i <= n; i++)
	{
		// �ִ��� ��� �ִ´�.
		fill(c, c + MAX, false); // �ѹ��� ���� �̺и�Ī�� ������ �� ���� fill �Լ��� �̿��Ͽ� c �迭������ �ʱ�ȭ�Ѵ�. 
		if(dfs(i)) count++; // dfs�� �����ؼ� Ư���� �ҿ� ���ؼ� �̺и�Ī�� �̷�����ٸ� count���� 1 �����Ѵ�. 
	 }
	 // �ι��� �۾��� �� �ִ� ����� �߰������� ����Ѵ�.
	 int extra = 0;
	 for(int i = 1; i <= n && extra < k; i++)
	 {
	 	fill(c, c + MAX, false);
	 	if(dfs(i)) extra++;
	  } 
	 printf("%d\n", count + extra);
	 return 0;
}
