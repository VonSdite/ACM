#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll exgcd(ll a, ll b, ll &x, ll &y)
{
	if(0 == b)
	{
		x = 1, y = 0;
		return a;
	}
	ll r = exgcd(b, a%b, x, y);
	ll tmp = x;
	x = y;
	y = tmp - a/b*y;
	return r;
}

char quickpower(ll a, ll b, ll m)
{
	ll ans=1;
	a %= m;
	while(b)
	{
		if(b & 1) ans=(ans*a)%m;
		b >>= 1;
		a = (a*a)%m;
		
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	ll p, q, e, l;
	while(~scanf("%I64d %I64d %I64d %I64d", &p, &q, &e, &l))
	{
		ll fn = (p-1)*(q-1);
		ll n = p*q;
		ll d, y;
		exgcd(e, fn, d, y);
		d = (d>0)?d:d+fn;
		ll tmp;
		for (int i = 0; i < l; ++i)
		{
			scanf("%I64d", &tmp);
			printf("%c", quickpower(tmp, d, n));
		}
		printf("\n");
	}
	return 0;
}