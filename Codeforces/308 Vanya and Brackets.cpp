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
ll i,j,n,x,y,m,k,ans,a[6000],b[6000];
vector <ll> f;
string s,t;
pair<ll,ll> solve(ll l, ll r)
{
	ll x = 0, y = a[l];
	for (int i = l; i < r; i++)
		if (b[i] == 1)
		   x += y, y = a[i+1];
		else
			y *= a[i+1];
	return mp(x,y);
}
int main()
{
	cin >> s;
	t = "1*";
	t.append(s);
	t.append("*1");
	s = t;
	n = s.size();
	m = n/2;
	for (i = 0; i < n; i+=2)
		a[i/2] = s[i] - '0';
	for (i = 1; i < n; i+=2)
		if (s[i] == '+')
		   b[i/2] = 1;
		else
		{
			b[i/2] = 2;
			f.push_back(i/2);
		}
	ll max1 = 0;
	for (i = 0; i < f.size(); i++)
		for (j = i+1; j < f.size(); j++)
		{
		 pair <ll,ll> tmp = solve(0,f[i]);
		 x = tmp.first, y = tmp.second;
		 tmp = solve(f[i]+1,f[j]);
		 y *= tmp.first + tmp.second;
		 ll xx = a[f[j]];
		 a[f[j]] = y;
		 tmp = solve(f[j],m);
		 max1 = max(max1, x+tmp.first+tmp.second);
		 a[f[j]] = xx;
		}
	cout << max1 << endl;
	return 0;
}