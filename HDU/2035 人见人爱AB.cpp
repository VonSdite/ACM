#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b;
	while (cin >> a >> b && (a || b))
	{
		int ans = 1;
		a %= 1000;
		while(b)
		{
			if(b % 2) ans = (ans * a) % 1000;
			b /= 2;
			a = (a * a) % 1000;
		}
		cout << ans << endl;
	}
	return 0;
}