#include <iostream>
#include <algorithm>

using namespace std;
long long  a[100005], h[100005];

int main(int argc, char const *argv[]) 
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) scanf("%I64d %I64d", &a[i], &h[i]);
	int cnt;
	if (n >= 2) cnt = 2;
	else cnt = 1;
	for (int i = 1; i < n - 1; i++) 
	{
		if (abs(a[i] - a[i - 1]) > h[i]) 
		{
			cnt++;
		}

		else if (abs(a[i + 1] - a[i]) > h[i]) 
		{
			cnt++;
			a[i] += h[i];
		}
	}
	
	cout << cnt << endl;

	return 0;
}