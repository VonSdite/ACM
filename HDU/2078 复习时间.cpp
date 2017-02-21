#include "iostream"
#include "vector"
#include "algorithm"
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		vector<int> complex;
		int tmp;
		for (int i = 0; i < n; ++i)
		{
			cin >> tmp;
			complex.push_back(tmp);
		}
		sort(complex.begin(), complex.end());
		int max = 0;
		tmp = 0;
		for (int i = 0; i < m; ++i)
		{
			if (i == 0)
				tmp = (100 - complex[i]) * (100 - complex[i]);
			else
				tmp = (complex[i] - complex[i - 1]) * (complex[i] - complex[i - 1]);
			if (max < tmp) max = tmp;
		}
		cout << max << endl;
	}
	return 0;
}