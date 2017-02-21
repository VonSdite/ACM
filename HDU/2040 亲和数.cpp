#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int m;
	cin >> m;
	while (m--)
	{
		int a, b;
		cin >> a >> b;
		int sum = 0;
		for (int i = 1; i < a; ++i)
		{
			if(a % i == 0) sum += i;
		}
		if(sum == b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}