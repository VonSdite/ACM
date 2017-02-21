#include <iostream>
#include <vector>
#include <iterator>
#include <iomanip>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	long long n, r;
	cout << setiosflags(ios::uppercase);
	while (cin >> n >> r)
	{
		if(n == 0) cout << 0 << endl;
		else 
		{
			vector<char> res;
			if(n < 0)	
			{
				cout << "-";
				n = abs(n);
			}
			while (n)
			{
				int tmp = n % r;
				switch(tmp)
				{
					case 10: res.push_back('A');
					break;
					case 11: res.push_back('B');
					break;
					case 12: res.push_back('C');
					break;
					case 13: res.push_back('D');
					break;
					case 14: res.push_back('E');
					break;
					case 15: res.push_back('F');
					break;
					default: res.push_back(abs(tmp)+'0');
				}
				n /= r;
			}
			vector<char>::reverse_iterator it;
			for(it = res.rbegin(); it != res.rend(); ++it)
			{
				cout << *it;
			}
			cout << endl;
		}
	}
	return 0;
}