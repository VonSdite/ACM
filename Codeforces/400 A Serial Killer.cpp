#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string a, b;
	while (cin >> a >> b)
	{
		cout << a << ' ' << b << endl;
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			string tma, tmb;
			cin >> tma >> tmb;
			if(tma == a)
			{
				cout << tmb << ' ' << b << endl;
				a = tmb;
			}
			else 
			{
				cout << a << ' ' << tmb << endl;
				b = tmb;
			}

		}
	}
	return 0;
}