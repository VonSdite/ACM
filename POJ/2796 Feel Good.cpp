/**
 * 以当前位置为所在区间的最小值，算以它为最小值向两边能覆盖到的最大范围。记录下来
   然后就可以简单的找出最大值了
 */
#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>

using namespace std;

const int SIZE = 1e5+5;

long long sum[SIZE];
long long record[SIZE];
int l[SIZE], r[SIZE];

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n))
	{

		memset(sum, 0, sizeof(sum));
		memset(record, 0, sizeof(record));
		memset(l, 0, sizeof(l));
		memset(r, 0, sizeof(r));

		for (int i = 1; i <= n; ++i)
		{
			scanf("%I64d", &record[i]);
			sum[i] += sum[i-1] + record[i];
			l[i] = r[i] = i;
		}

		for (int i = 2; i <= n; ++i)
		{
			while (l[i] > 1 && record[i] <= record[l[i]-1])
			{
				l[i] = l[l[i]-1];
			}
		}

		for (int i = n-1; i >= 1; --i)
		{
			while (r[i] < n && record[i] <= record[r[i]+1])
			{
				r[i] = r[r[i]+1];
			}		
		}

		long long theMax = 0;
		int le = 1, ri = 1;
		for (int i = 1; i <= n; ++i)
		{
			long long tmp = (sum[r[i]] - sum[l[i]-1])*record[i];
			if(theMax < tmp)
			{
				theMax = tmp;
				le = l[i];
				ri = r[i];
			}
		}
		printf("%I64d\n%d %d\n", theMax, le, ri);
	}
	return 0;
}