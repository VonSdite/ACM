#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	long long T, n;
	cin >> T;
	while (T--)
	{
		cin >> n;
		printf("%lld", n * n * n);
		printf(" ");
		n++;
		printf("%lld\n", n * n * n);
	}
	return 0;
}