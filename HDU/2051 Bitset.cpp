#include "iostream"
#include "vector"
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while (cin >> n)
	{
		vector<int> res;
		int tmp;
		while (n)
		{
			tmp = n % 2;
			res.push_back(tmp);
			n /= 2;
		}
		reverse(res.begin(), res.end());
		for(auto r : res)
		{
			cout << r;
		}
		cout << endl;
	}
	return 0;
}