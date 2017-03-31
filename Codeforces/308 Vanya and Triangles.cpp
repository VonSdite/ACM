#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstring>
#include <deque>
#include <time.h>
#include <stack>
#include <stdio.h>
#include <map>
#include <set>
#include <string>
#include <fstream>
#include <queue>
#include <unordered_map>
#define mp make_pair
#define pb push_back
#define PI 3.14159265358979323846
#define MOD 1000000007
#define INF ((ll)1e+15)
#define x1 fldgjdflgjhrthrl
#define x2 fldgjdflgrtyrtyjl
#define y1 fldggfhfghjdflgjl
#define y2 ffgfldgjdflgjl
typedef long long ll;
using namespace std;
int i,j,n,m,x[3005],y[3005],a[4500000],b[20005][205];
unordered_map <ll, int> f;
unordered_map <ll, int>::iterator itr;
ll Abs(int a)
{
	return a>0?a:-a;
}
ll gcd(int a, int b)
{
	if (b == 0)
	   return a;
	return gcd(b,a%b);
}
int main()
{
	for (i = 1; i <= 20000; i++)
        for (j = 1; j <= 200; j++)
            b[i][j] = gcd(i,j);
	for (i = 1; i <= 20000; i++)
		b[i][0] = i;
	for (i = 1; i <= 200; i++)
		b[0][i] = i;
 	cin >> n;
 	for (i = 2; i <= 2000; i++)
		a[i*i-i] = i;
 	for (i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		if (i != j)
		{
			int kc = y[j] - y[i];
			int kz = x[j] - x[i];
			int bc = y[i]*(x[j] - x[i]) - x[i]*(y[j]-y[i]);
			int bz = x[j] - x[i];
			if (kz != 0)
			{
			int tmp = b[Abs(kc)][Abs(kz)];
			kc /= tmp; kz /= tmp;
			if (kc < 0)
			   kc = -kc, kz = -kz;
			if (kc == 0)
			   kz = 1;
            tmp = b[Abs(bc)][Abs(bz)];
			bc /= tmp; bz /= tmp;
			if (bc < 0)
			   bc = -bc, bz = -bz;
			if (bc == 0)
			   bz = 1;
            }
            else
            kc = bc = x[i];
            ll hsh = bc*27000000000LL + bz*9000000LL + kc*300 + kz;
				f[hsh]+=2;
		}
	}
	ll ans = ((ll)n*(n-1)*(n-2))/6;
	for (itr = f.begin(); itr != f.end(); itr++)
	{
		int tmp = (*itr).second;
		tmp = a[tmp/2];
		ans -= ((ll)tmp*(tmp-1)*(tmp-2))/6;
	}
	cout << ans << endl;
	return 0;
}