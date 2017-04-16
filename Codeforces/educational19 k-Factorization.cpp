#include <bits/stdc++.h>

using namespace std;

int a[100000];
int b[100000];
void prime()
{
	bool flag;
	int cnt = 0;
	for (int i = 2; i < 100000; ++i)
	{
		flag = false;
		for (int j = 2; j * j < i; ++j)
		{
			if(i % j == 0)
			{
				flag = true;
				break;
			}
		}
		if(!flag) a[cnt++]=i;
	}
}

int main(int argc, char const *argv[])
{
	int n, k;
	prime();
    while (~scanf("%d %d", &n, &k))
    {
    	memset(b, 0, sizeof(b));
    	int cnt = 0;
    	for (int i = 0; a[i] <= n; ++i)
    	{
    		while(n % a[i] == 0)
    		{
    			b[cnt++] = a[i];
    			n /= a[i];
    		}
    	}
	    if(cnt >= k)
	    {
	    	int kk = cnt-k;
	    	for (int i = 1; i <= kk; ++i)
	    	{
	    		b[cnt-i-1] *= b[cnt-i];
	    	}
	    	for (int i = 0; i < k; ++i)
	    	{
	    		printf("%d ", b[i]);
	    	}
	    	printf("\n");
	    }
	    else
	    {
	    	printf("-1\n");
	    }
	}
	return 0;
}