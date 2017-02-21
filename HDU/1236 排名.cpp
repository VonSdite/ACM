#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Student
{
	Student() : score(0), cnt_solve(0) { }
	string ID;
	int cnt_solve;
	int score;
};

int score[15];

bool compare(Student &a, Student &b)
{
	if(a.score == b.score) return a.ID < b.ID;
	else return a.score > b.score;
}

int main(int argc, char const *argv[])
{
	int n, m, g;
	while (~scanf("%d", &n) && n)
	{
		scanf("%d %d", &m, &g);
		Student person[1005];
		int tmp;
		int cnt = 0;
		for (int i = 1; i <= m; ++i)
		{
			scanf("%d", &score[i]);
		}
		for (int i = 0; i < n; ++i)
		{
			cin >> person[i].ID >> person[i].cnt_solve;

			for (int j = 0; j < person[i].cnt_solve; ++j)
			{
				cin >> tmp;
				person[i].score += score[tmp];
			}
			if(person[i].score >= g) ++cnt;
		}
		printf("%d\n", cnt);
		sort(person, person+n, compare);
		for (int i = 0; i < cnt; ++i)
		{
 			cout << person[i].ID << " " << person[i].score << endl;
		}
	}
	return 0;
}