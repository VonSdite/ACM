#include <bits/stdc++.h>

using namespace std;

const int SIZE = 3e5 + 5;
char c[SIZE];

int main(int argc, char const *argv[])
{
    string a, b;
    while (cin >> a >> b)
    {
        memset(c, 0, sizeof(c));
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        int len = (int)a.size();
        a = a.substr(0, (len + 1) / 2);
        b = b.substr(0, len / 2);
        int oind = 0, iind = 0, indfront = 0, indback = len - 1, szo = a.size(), szi = b.size();

        while (indfront <= indback)
        {
            if (a[oind] < b[iind])
            {
                c[indfront] = a[oind];
                ++indfront; ++oind;
            }
            else
            {
                c[indback] = a[szo - 1];
                --indback; --szo;
            }

            if (indfront > indback)
                break;

            if (b[iind] > a[oind])
            {
                c[indfront] = b[iind];
                ++indfront; ++iind;
            }
            else
            {
                c[indback] = b[szi - 1];
                --indback; --szi;
            }
        }
        c[len] = '\0';
        printf("%s\n", c);
    }
    return 0;
}