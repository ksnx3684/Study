#include <iostream>
#include <vector> 

using namespace std;

vector<int> makeTable(string pattern) // 접두사와 접미사의 최대길이를 포함하고 있는 테이블 
{
	int patternSize = pattern.size(); // 현재 찾고자 하는 문자열의 길이 
	vector<int> table(patternSize, 0);
	int j = 0;
	for(int i = 1; i < patternSize; i++)
	{
		while(j > 0 && pattern[i] != pattern[j])
		{
			j = table[j - 1];
		}
		if(pattern[i] == pattern[j])
		{
			table[i] = ++j;
		}
	}
	return table;
}
int main(void)
{
	string pattern = "abacaaba";
	vector<int> table = makeTable(pattern);
	for(int i = 0; i < table.size(); i++)
	{
		printf("%d ", table[i]);
	}
	return 0;
}
