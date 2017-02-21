#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	while (cin >> n >> m && (n || m))
	{
		vector<int> res, a, b;
		int tmp;
		for (int i = 0; i < n; ++i)
		{
			cin >> tmp;
			a.push_back(tmp);
		}
		for (int i = 0; i < m; ++i)
		{
			cin >> tmp;
			b.push_back(tmp);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		set_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter(res));
		if(res.empty()) cout << "NULL";
		else 
		{
			for(auto i : res)
			{
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}