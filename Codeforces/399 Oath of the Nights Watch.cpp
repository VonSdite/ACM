#include <iostream>

using namespace std;

int a[100006];

int main(int argc, char const *argv[])
{
	int n;
	while(~scanf("%d", &n)) 
	{
		int max = 0;
		int min = 1000000000;
	    for (int i = 0; i < n; ++i)
	    {
	    	scanf("%d", &a[i]);
	    	if(a[i] > max) max = a[i];
	    	if(a[i] < min) min = a[i];
	    }

	    int tmp=0;
	    for (int i = 0; i < n; ++i)
	    {
	    	if(a[i]!=min && a[i] != max) ++tmp;
	    }	

	    printf("%d\n", tmp);
	}
	return 0;
}