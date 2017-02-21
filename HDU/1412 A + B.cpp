#include <iostream>
#include <set>
using namespace std;
int main()
{
	int n, m;
	while (cin >> n >> m && n && m)
	{
		int num;
		set<int> answer;
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			answer.insert(num);
		}
		for (int i = 0; i < m; i++)
		{
			cin >> num;
			answer.insert(num);
		}
		for (set<int>::iterator it = answer.begin(); it != answer.end(); ++it)
			if (it == answer.begin())
				cout << *it;
			else
				cout << " " << *it;
		cout << endl;
	}
	return 0;
}