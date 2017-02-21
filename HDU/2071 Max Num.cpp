#include "iostream"
#include "iomanip"

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		double tmp, max = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> tmp;
			if (tmp > max) max = tmp;
		}
		cout << setiosflags(ios::fixed) << setprecision(2) << max << endl;
	}
	return 0;
}