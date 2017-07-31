#include <bits/stdc++.h>

using namespace std;

#define ll long long
const ll MAX = 1e6+5;

// 二分
bool check(ll a, ll b)
{
    ll l = 1, r = MAX;

    ll cmp = a * b;
    while (l <= r)
    {
        ll mid = (l+r)/2;
        if(mid * mid * mid < cmp)
        {
            l = mid + 1;
        }
        else r = mid - 1;
    }
    if(l * l * l == cmp && !(a % l) && !(b % l)) return true;
    else return false;
}

int main(int argc, char const *argv[])
{
    int n;
    ll a, b;
    while (~scanf("%d", &n))
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%I64d %I64d", &a, &b);
            if(check(a, b)) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}


// 数学方法
// int main(int argc, char const *argv[])
// {
//     int n, a, b;

//     while (~scanf("%d", &n))
//     {
//         for (int i = 0; i < n; ++i)
//         {
//             scanf("%d %d", &a, &b);
//             int K = cbrt((double)a * (double)b);
//             int aa = a / K;
//             int bb = b / K;
//             puts((aa * aa * bb == a && bb * bb * aa == b) ? "Yes" : "No");
//         }
//     }
//     return 0;
// }