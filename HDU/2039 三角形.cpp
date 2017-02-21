#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int m;
	cin >> m;
	while (m--)
	{
		vector<double> a;
		double tmp;
		for (int i = 0; i < 3; ++i)
		{
			cin >> tmp;
			a.push_back(tmp);
		}
		sort(a.begin(), a.end());
		if(a[0] + a[1] > a[2]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}