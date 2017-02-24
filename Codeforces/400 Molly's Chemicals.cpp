/*
	解题的思路过程:
	设输入个数为N， 底数为k，结果为cnt
	根据题意可知，输入的最大值为1e15，所以使用 long long类型

	由于需要计算每连续段的和， 普通的遍历计算需要O(n^2)的时间，对于本题会超时(n最大为1e5)
	所以先 预先计算出从第一个数开始的部分和，S[n] = S[1]+S[2]+···+S[n](用时O(n))
	则计算 第a个数到第b个数的 部分和w为 w = S[b]-S[a-1]
	推出 S[b] = w+S[a-1](b >= a)
	如果w是 k 的非负数幂次方， 则++cnt

	(k作为底数，考虑本题最大值为1e15，k最多只需循环不超过60次即可算出幂次方，大大减少了循环时间)
	所以我们可以通过遍历k的非负数幂次方来加上 较短的部分和 来判断是否等于 较长的部分和

	则，
	1. 先预先算出 部分和
	2. 从最长的部分和开始，循环加k的非负数次幂

	注意代码对k==1 和 k==-1的处理
 */

/*
by:dark_n8

We are going to loop over all possible non-negative powers of k. Since the maximum possible value of subarray sum can be 105 × 109 = 1014, there can be at most  possible powers that can be the sum of subarrays. Let p[i] be the sum of elements from index 1 to index i. We can precalculate p[i] in O(n) time complexity. (Prefix sum)

We will try to find the count of subarrays starting from index l. The sum of any such subarray ending at index r can be written as p[r] - p[l - 1]. Now, p[r] - p[l - 1] = w, then, p[r] = w + p[r-1], where w is a power of k. We have to count the values of r ≥ l such that p[r] = w + p[l - 1]. 
For this part, we can store the count of p[r] in a dictionary as we move from right of the array and use the dictionary to find count of p[r] for corresponding p[l] and w.

PS: Do take care of a corner case for k =  ± 1 while calculating powers of k.
 */


#include <iostream>
#include <cstring>
#include <map>
#include <algorithm>
#include <numeric>

using namespace std;

long long a[100005];
map<long long, bool> sa;

int main(int argc, char const *argv[])
{
	long long n, k;
	while (~scanf("%I64d %I64d", &n, &k))
	{
		long long tmp = 0;
		a[0] = 0;	
		for (int i = 1; i <= n; ++i)
		{
			scanf("%I64d", &a[i]);
			tmp += a[i];
			a[i] = tmp;	//计算部分和
		}

		long long cnt = 0;
		map<long long, int> m;

		if(k == 1)
		{
			for (int i = n; i >= 0; --i)
			{
				if(m.find(a[i] + 1) != m.end())
					cnt += m[a[i]+1];
				++m[a[i]];
			}
		}
		else if(k == -1)
		{
			for (int i = n; i >= 0; --i)
			{
				if(m.find(a[i] + 1) != m.end())
					cnt += m[a[i]+1];
				if(m.find(a[i] - 1) != m.end())
					cnt += m[a[i]-1];
				++m[a[i]];
			}
		}
		else
		{
			for (int i = n; i >= 0; --i)
			{
				long long cur = 1;
				while(true)
				{
					if(i == n) break;
					if(abs(cur) > 1e15) break;
					if(m.find(a[i] + cur) != m.end())
						cnt += m[a[i]+cur];
					cur *= k;
				}
				++m[a[i]];
			}
		}
		printf("%I64d\n", cnt);
	}
	return 0;
}