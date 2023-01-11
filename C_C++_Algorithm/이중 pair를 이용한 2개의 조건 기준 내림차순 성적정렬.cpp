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
	vector<pair<string, pair<int, int> > > v; // string : 이름, int, int : 성적, 생년월일 
	v.push_back(pair<string, pair<int, int> > ("김영삼", pair<int, int>(90, 19271220))); // push_back은 리스트의 마지막 부분에 삽입을 하겠다는 의미 
	v.push_back(pair<string, pair<int, int> > ("김대중", pair<int, int>(85, 19240106)));
	v.push_back(pair<string, pair<int, int> > ("노무현", pair<int, int>(82, 19460901)));
	v.push_back(pair<string, pair<int, int> > ("이명박", pair<int, int>(98, 19411219)));
	v.push_back(pair<string, pair<int, int> > ("박근혜", pair<int, int>(90, 19520202)));
	v.push_back(pair<string, pair<int, int> > ("문재인", pair<int, int>(60, 19530124)));
	
	sort(v.begin(), v.end(), compare);
	for(int i = 0; i < v.size(); i++) // v.size는 벡터의 크기를 가져오는 함수 
		{
			cout << v[i].first << ' '; /*여기서 second란 pair 안의 int, stiring 중 어떤 형식을 사용하느냐에 따라 정해짐.
			예를 들어 first는 int형을 사용한다는 의미, second는 string형을 사용한다는 의미.*/ 
		}
		return 0;
}
