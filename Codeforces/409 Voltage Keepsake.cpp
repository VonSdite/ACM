#include <stdio.h>
#include <algorithm>
#include <assert.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const ll MAXN = 1e5 + 4;
const ld MAXV = 1e18;

ll a[MAXN], b[MAXN];
int n;
ll P;
bool f(ld imid) 
{
	ld needsum = 0;
	for (int i = 0; i < n; i++) 
	{
		ld need = max(0.0L, imid*a[i] - b[i]);
		needsum += need;
	}
	ld supply = imid * P;
	return supply >= needsum;
}
int main()
{
	scanf("%d %I64d", &n, &P);
	for (int i = 0; i < n; i++) 
	{
		scanf("%I64d %I64d", &a[i], &b[i]);
	}
	ll suma = 0;
	for (int i = 0; i < n; i++) 
	{
		suma += a[i];
	}
	if (P >= suma) 
	{
		printf("-1\n");
		return 0;
	}
	ld imin = 0, imax = MAXV;
	for (ll iter = 0; iter < 220; iter++) 
	{
		ld imid = (imin + imax) / 2;
		if (f(imid)) imin = imid;
		else imax = imid;
	}
	if (imax > MAXV - 100) printf("-1\n");
	else printf("%.9f\n", (double)imin);
	return 0;
}