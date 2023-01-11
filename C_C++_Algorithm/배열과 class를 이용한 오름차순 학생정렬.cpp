#include <iostream>
#include <algorithm>

using namespace std;

class Student // class는 c++에서 여러개의 변수를 하나로 묶기위해 사용. 즉, 하나의 객체를 정의해주기 위해 사용 (자료형) 
{
	public:
		string name;
		int score;
		Student(string name, int score)
		{
			this -> name = name;
			this -> score = score;
		}
		bool operator < (Student & student)
		{
			return this -> score < student.score;
		}
};

int main(void)

{
	Student students[] =
	{
		Student("이병훈", 90),
		Student("김대중", 93),
		Student("노무현", 97),
		Student("이명박", 87),
		Student("박근혜", 92)
	};
	sort(students, students + 5);
	for(int i = 0; i < 5; i++)
	{
		cout << students[i].name << ' ';
	}
}
