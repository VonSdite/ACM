#include <bits/stdc++.h>

using namespace std;

pair<int, int> num[100];
vector<pair<int, int> >v;

int main(int argc, char const *argv[])
{
    int t = 1, k = 20;
    for (int i = 1; i <= k; i++)
    {
        num[i] = make_pair(1, i);
        v.push_back(make_pair(i, k + t));
    }

    while (true)
    {
        sort(num + 1, num + k + 1);
        
        if (num[1].first == k)
            break;

        t++;
        int z = k - num[1].first;
        for (int i = 1; i <= z; i++)
        {
            num[i].first++;
            v.push_back(make_pair(num[i].second, t + k));
        }
    }
    int len = (int)v.size();
    printf("%d %d\n", k+t, len);

    for (int i = 0; i < len; i++)
        printf("%d %d\n", v[i].first, v[i].second);

    printf("%d\n", k);
    for (int i = 1; i <= k; i++)
        printf("%d\n", i);
    
    return 0;
}