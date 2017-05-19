#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int l, r;
    while (~scanf("%d %d", &l, &r))
    {
        if(l != r) printf("2\n");
        else printf("%d\n", l);
    }
    return 0;
}