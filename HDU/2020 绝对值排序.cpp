#include <iostream>
#include <vector>			
#include <algorithm>

using namespace std;

int compare(int &a, int &b)
{
	return abs(a) > abs(b);
}

int main(int argc, char const *argv[])
{
	int n;
	while(~scanf("%d", &n) && n)
	{
		vector<int> a;
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			scanf("%d", &tmp);
			a.push_back(tmp);
		}
		sort(a.begin(), a.end(), compare);
		for(auto i = a.begin(); i != a.end(); ++i)
		{
			if(i != a.begin()) printf(" %d", *i);
			else printf("%d", *i);
		}
		puts("");
	}
	return 0;
}