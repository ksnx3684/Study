#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a,
			 pair<string, pair<int, int> > b)
			 {
			 	if(a.second.first == b.second.first)
			 	{
			 		return a.second.second > b.second.second;
				 }
				else
				{
					return a.second.first > b.second.first;
				}
			 }

int main(void)
{
	vector<pair<string, pair<int, int> > > v; // string : �̸�, int, int : ����, ������� 
	v.push_back(pair<string, pair<int, int> > ("�迵��", pair<int, int>(90, 19271220))); // push_back�� ����Ʈ�� ������ �κп� ������ �ϰڴٴ� �ǹ� 
	v.push_back(pair<string, pair<int, int> > ("�����", pair<int, int>(85, 19240106)));
	v.push_back(pair<string, pair<int, int> > ("�빫��", pair<int, int>(82, 19460901)));
	v.push_back(pair<string, pair<int, int> > ("�̸��", pair<int, int>(98, 19411219)));
	v.push_back(pair<string, pair<int, int> > ("�ڱ���", pair<int, int>(90, 19520202)));
	v.push_back(pair<string, pair<int, int> > ("������", pair<int, int>(60, 19530124)));
	
	sort(v.begin(), v.end(), compare);
	for(int i = 0; i < v.size(); i++) // v.size�� ������ ũ�⸦ �������� �Լ� 
		{
			cout << v[i].first << ' '; /*���⼭ second�� pair ���� int, stiring �� � ������ ����ϴ��Ŀ� ���� ������.
			���� ��� first�� int���� ����Ѵٴ� �ǹ�, second�� string���� ����Ѵٴ� �ǹ�.*/ 
		}
		return 0;
}
