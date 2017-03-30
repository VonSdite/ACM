#include <bits/stdc++.h>
using namespace std;

const int N = 2e3 + 10;
const int B = 1e3 + 10;

bool vis[N], inque[2 * N];
int n, k;
vector<int> v;

int main() 
{
	scanf("%d%d", &n, &k);
	for (int i = 0; i < k; i++) 
	{
		int t;
		scanf("%d", &t);
		if (!vis[t]) 
		{
			vis[t] = true;
			v.push_back(t);
		}
	}
	for (int i = 0; i < v.size(); i++) 
	{
		v[i] -= n;
	}
	queue<pair<int, int>> Q;
	Q.push(make_pair(0, 0));
	inque[B] = true;
	while (!Q.empty()) 
	{
		pair<int, int> t = Q.front();
		Q.pop();
		inque[t.first + B] = 0;
		for (int i = 0; i < v.size(); i++) 
		{
			int u = v[i] + t.first;
			if (u < -1000 || u > 1000) continue;
			if (!inque[u + B]) 
			{
				if (u == 0) 
				{
					printf("%d\n", t.second + 1);
					return 0;
				}
				inque[u + B] = true;
				Q.push(make_pair(u, t.second + 1));
			}
		}
	}
	printf("-1\n");
	return 0;
}