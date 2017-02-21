#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int &a, int &b)
{
	return a > b;
}

int a[20001];

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while (t--) 
	{
	    int n;
	    scanf("%d", &n);
	    for (int i = 0; i < n; ++i)
	    {
	    	scanf("%d", &a[i]);
	    }

	    sort(a, a+n, compare);

	    int cnt = 0;

	    for (int i = 2; i < n; i += 3)
	    {
	    	cnt += a[i];
	    }

	    printf("%d\n", cnt);
	}
	return 0;
}