#include <iostream>
#include <string>

using namespace std;

string a[500005];

int main(int argc, char const *argv[])
{
	int n;
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		for (int i = n-2; i >= 0; --i)
		{
			int mark = -1;

			string str1 = a[i];
			string str2 = a[i+1];

			for (size_t j = 0; j < a[i].length(); ++j)
			{
				if(j == a[i+1].length() || str1[j] > str2[j])
				{
					mark = j;
					break;
				}
				if(str1[j] < str2[j])
				{
					break;
				}
			}

			if(mark != -1)
			{
				a[i].clear();
				for (int j = 0; j < mark; ++j)
				{
					a[i].push_back(str1[j]);
				}
			}
		}

		for (int i = 0; i < n; ++i)
		{
 			cout << a[i] << endl;
		}
	
	return 0;
}