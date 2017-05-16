#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, tmp;
    int cnt;
    while (~scanf("%d", &n))
    {
        cnt = 1;
        tmp = n;
        while(tmp >= 10)
        {
            tmp /= 10;
            cnt *= 10;
        }
        tmp = (tmp+1)*cnt;
        printf("%d\n", tmp - n);
    }   
    return 0;
}