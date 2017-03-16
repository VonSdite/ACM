//注:以后验证开根sqrt的时候，如对a开根，用 sqrt(a)*sqrt(a)是否等于a来判断是否能开根
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	long long n, m;
	while (~scanf("%I64d %I64d", &n, &m))
	{
		if (m >= n)
		{
			printf("%I64d\n", n);
		}
		else
		{
			long long b = 8 * (n - m) + 1;
			long long a = sqrtf(b);
			long double tmp = (a - 1)/ 2 + m ;
			if (a*a != b) ++tmp;
			if (tmp > n) tmp = n;
			printf("%I64d\n", (long long)tmp);
		}
	}
	return 0;
}



// 另一种解法：



/*At first, let's make the following assumption: if a sparrow cannot eat a grain because the barn is empty, the number of grains in the barn becomes negative. It's easy to see that the answer doesn't change because of this.

Now, let's observe the number of grains before sparrows come. At first, the barn remains full for m + 1 days (because sparrows eat less grains than it's added to the barn). Then the number of grains is decreased by one, by two and so on. So, on the m + 1 + i-th day there are n-i*(i+1)/2 grains in the barn before sparrows come (remember that for any positive integer x the equality 1+2+3+4+···+x=(1+x)*x/2 is always true).

How can we determine if the barn is empty? It's reasonable that if there are q grains on the k-th day after grain is brought, then at the end of the k - 1-th day there are q - m grains in the barn. So, if on the k - 1-th day the barn becomes empty (q - m ≤ 0), then there must be q ≤ m grains on the k-th day after grain is brought.

So, we must find such minimal day m + 1 + k, in which there are m or less grains after grain is brought. That is, using the formula above, we must find such minimal k that n-k(k+1)/2 <= m



It can be easily done using binary search. It's not hard to observe that the answer in this case is m + k (if in the m + 1 + k-th day before sparrows come there are less or equal than m grains, then in the m + 1 + k - 1 = m + k-th day the barn is empty).

The corner case in this problem is m ≥ n. In this case the barn becomes full every day and it becomes empty only in the n-th day when sparrows eat all the grain.

Also notice that k can be found using a formula, but such solutions could fail by accuracy, because the formula is using the square root function.

Time complexity is O(logn)*/


/*#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	__int64 n, m;
	while(~scanf("%I64d %I64d", &n, &m))
	{
		if(m >= n) printf("%I64d\n", n);
		else
		{
			n -= m;
			__int64 l = 0, r = 2e9, mid = 0, val = 0;
			while(l <= r)
			{
				mid = (l+r)/2;
				val = mid*(mid+1)/2;
				if(val >= n) r = mid-1;
				else l = mid+1;
			}
			printf("%I64d\n", l+m);
		}
	}
	return 0;
}*/