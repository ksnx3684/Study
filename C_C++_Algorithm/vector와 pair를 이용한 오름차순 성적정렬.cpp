#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<pair<int, string> > v;
	v.push_back(pair<int, string>(90, "김영삼")); // push_back은 리스트의 마지막 부분에 삽입을 하겠다는 의미 
	v.push_back(pair<int, string>(85, "김대중"));
	v.push_back(pair<int, string>(82, "노무현"));
	v.push_back(pair<int, string>(98, "이명박"));
	v.push_back(pair<int, string>(79, "박근혜"));
	v.push_back(pair<int, string>(60, "문재인"));
	
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++) // v.size는 벡터의 크기를 가져오는 함수 
		{
			cout << v[i].second << ' '; /*여기서 second란 pair 안의 int, stiring 중 어떤 형식을 사용하느냐에 따라 정해짐.
			예를 들어 first는 int형을 사용한다는 의미, second는 string형을 사용한다는 의미.*/ 
		}
		return 0;
}
