#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	long long a, b;
	cout.setf(ios::uppercase);
	while (cin >> hex >> a >> b)
	{
		long long c = a + b;
		if (c < 0) cout << hex << "-" << -c << endl;
		else cout << hex << c << endl;
	}
	return 0;
}