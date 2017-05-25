#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    while (~scanf("%d %d", &n, &m))
    {
        if(1 == n) 
        {
            printf("1\n");
            continue;
        }
        if(m-1 < n-m) printf("%d\n", m+1);
        else printf("%d\n", m-1);
    }
    return 0;
}