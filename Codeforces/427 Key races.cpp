#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int s, v1, v2, t1, t2;
    while (~scanf("%d %d %d %d %d", &s, &v1, &v2, &t1, &t2))
    {
        t1 += t1;
        t2 += t2;

        v1 *= s;
        v2 *= s;
        v1 += t1;
        v2 += t2;

        if(v1 == v2)
        {
            printf("Friendship\n");
        }
        else if(v1 < v2)
        {
            printf("First\n");
        }
        else printf("Second\n");
    }
    return 0;
}