#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3+5;
int a[SIZE];
int b[SIZE];
int p[SIZE];
int tmp [3];
int k[3];
unordered_map<int, bool> record;

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        record.clear();
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        int c = 0, cc = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &b[i]);
            if(a[i]==b[i]) 
            {
                p[i] = a[i];
                ++record[a[i]];
            }
            else 
            {
                k[c++] = i;
            }
        }

        for (int j = 1; j <= n; ++j)
        {
            if(!record[j])
            {
                tmp[cc++] = j;
            }
        }
        if(cc == 2)
        {
            int cnt = 0;
            for (int i = 0; i < 2; ++i)
            {
                if(tmp[i]!=a[k[i]]) ++cnt;
                if(tmp[i]!=b[k[i]]) ++cnt;
            }
            if(cnt == 2)
            {
                p[k[0]]=tmp[0];
                p[k[1]]=tmp[1];
            }
            else
            {
                p[k[0]]=tmp[1];
                p[k[1]]=tmp[0];
            }
        }
        else
        {
            p[k[0]] = tmp[0];
        }
        for (int i = 0; i < n; ++i)
        {
            printf("%d", p[i]);
            if(i!=n-1) printf(" ");
            else printf("\n");
        }
    }
    return 0;
}