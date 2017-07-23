#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

const int SIZE = 300;
string name[SIZE];
string ans[SIZE];

int main(int argc, char const *argv[])
{
    int n, k;
    for (int i = 0; i < 26; ++i)
    {
        name[i] = 'A' + i;
    }

    for (int i = 26; i < SIZE; ++i)
    {
        name[i] = name[i-26] + (char)('a' + (i-26)%26);
    }

    string tmp;
    while (~scanf("%d %d", &n, &k))
    {
        int kkk, kk;
        for (int i = 0; i < n-k+1; ++i)
        {
            cin >> tmp;
            if(i)
            {
                if(tmp == "YES")
                {
                    ans[kk++] = name[++kkk];
                }
                else
                {
                    ans[kk++] = ans[i];
                }
            }
            else
            {
                if(tmp == "YES")
                {
                    for (int i = 0; i < k; ++i)
                    {
                        ans[i] = name[i];
                    }
                    kkk = k - 1;
                } 
                else
                {
                    ans[0] = ans[1] = name[0];
                    for (int i = 2; i < k; ++i)
                    {
                        ans[i] = name[i-1];
                    }
                    kkk = k-2;
                }
                kk = k; 
            }
        }

        for (int i = 0; i < n; ++i)
        {
            cout << ans[i];
            if(i != n-1) printf(" ");
            else printf("\n");
        }
    }
    return 0;
}