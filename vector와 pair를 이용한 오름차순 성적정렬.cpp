#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<pair<int, string> > v;
	v.push_back(pair<int, string>(90, "�迵��")); // push_back�� ����Ʈ�� ������ �κп� ������ �ϰڴٴ� �ǹ� 
	v.push_back(pair<int, string>(85, "�����"));
	v.push_back(pair<int, string>(82, "�빫��"));
	v.push_back(pair<int, string>(98, "�̸��"));
	v.push_back(pair<int, string>(79, "�ڱ���"));
	v.push_back(pair<int, string>(60, "������"));
	
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++) // v.size�� ������ ũ�⸦ �������� �Լ� 
		{
			cout << v[i].second << ' '; /*���⼭ second�� pair ���� int, stiring �� � ������ ����ϴ��Ŀ� ���� ������.
			���� ��� first�� int���� ����Ѵٴ� �ǹ�, second�� string���� ����Ѵٴ� �ǹ�.*/ 
		}
		return 0;
}
