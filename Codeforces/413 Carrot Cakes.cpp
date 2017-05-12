#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, t, k, d;
    while (~scanf("%d %d %d %d", &n, &t, &k, &d))
    {
        if(n-d/t*k > k) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}