#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        if(!(n&1)) printf("%d\n", n/2-1);
        else
        {
            printf("%d\n", n/2);
        }
    }
    return 0;
}