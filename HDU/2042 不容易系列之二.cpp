#include <iostream>

using namespace std;

long long number(int a)
{
	if(a == 1) return 4;
	return 2 * number(a-1) - 2;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	while (n--)
	{
		int a;
		cin >> a;
		cout << number(a) << endl;
	}
	return 0;
}