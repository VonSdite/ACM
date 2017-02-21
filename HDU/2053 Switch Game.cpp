#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while (cin >> n)
	{
		int cnt = 0;
		for (int i = 1; i <= n; ++i)
		{
			if (n % i == 0) ++cnt;
		}
		if(cnt % 2) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}