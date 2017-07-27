#include <iostream>
#include <algorithm>

using namespace std;

const int SIZE = 2e5+5;

struct Price
{
    int discountP;
    int noDiscountP;
    int differ;
} price[SIZE];

bool cmp(const Price &a, const Price &b)
{
    return a.differ > b.differ;
}

int main(int argc, char const *argv[])
{
    int n, k;
    int ans;
    while (~scanf("%d %d", &n, &k))
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &price[i].discountP);
        }

        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &price[i].noDiscountP);
            price[i].differ = price[i].noDiscountP - price[i].discountP;
        }

        sort(price, price+n, cmp);

        ans = 0;
        for (int i = 0; i < k; ++i)
        {
            ans += price[i].discountP;
        }

        for (int i = k; i < n; ++i)
        {
            ans += min(price[i].discountP, price[i].noDiscountP);
        }

        printf("%d\n", ans);
    }
    return 0;
}