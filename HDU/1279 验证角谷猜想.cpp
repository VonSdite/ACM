#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	while (n--)
	{
		int tmp;
		cin >> tmp;
		int cnt = 0;
		while (tmp != 1)
		{
			if(tmp % 2)
			{
				if(cnt) cout << " ";
				cout << tmp;
				++cnt;
				tmp *= 3;
				++tmp;
			}
			else tmp /= 2;
		}
		if(cnt == 0) cout << "No number can be output !" << endl;
		else cout << endl;
	}
	return 0;
}