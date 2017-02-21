#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while(~scanf("%d", &n)) 
	{
		int a[10];
		int cnt = 0;
		int num = 0;
	    while(n)
	    {
	    	int tmp = n % 10;
	    	a[cnt++] = tmp;
	    	num = max(num, tmp);
	    	n /= 10;
	    }
	    printf("%d\n", num);

	    --cnt;
	    for (int i = 0; i < num; ++i)
	    {
	    	while(a[cnt] == 0) --cnt;
	    	for (int j = cnt; j >= 0; --j)
		    {
		    	if(a[j] > 0) 
		    	{
		    		printf("1");
		    		--a[j];
		    	}
		    	else printf("0");
		    }
		    if(i != num - 1) printf(" ");
		    else printf("\n");
	    }
	}
	return 0;
}