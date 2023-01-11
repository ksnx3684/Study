#include <iostream>
#include <algorithm>

using namespace std;

class Student // class�� c++���� �������� ������ �ϳ��� �������� ���. ��, �ϳ��� ��ü�� �������ֱ� ���� ��� (�ڷ���) 
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
		Student("�̺���", 90),
		Student("�����", 93),
		Student("�빫��", 97),
		Student("�̸��", 87),
		Student("�ڱ���", 92)
	};
	sort(students, students + 5);
	for(int i = 0; i < 5; i++)
	{
		cout << students[i].name << ' ';
	}
}
