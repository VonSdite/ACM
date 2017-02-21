#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)
	{
		char tmp;
		int y;
		cin >> tmp >> y;
		if(tmp >= 'a' && tmp <= 'z')
			cout << -(tmp - 'a' + 1) + y << endl;
		else cout << (tmp - 'A' + 1) + y << endl;
	}
	return 0;
}