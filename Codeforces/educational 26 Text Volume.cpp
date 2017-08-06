#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string word;
    int n;
    while (~scanf("%d", &n))
    {
        getchar();
        getline(cin, word);
        int len = (int)word.length();
        int cnt = 0, MAX = 0;
        for (int i = 0; i < len; ++i)
        {
            while (i < len && word[i] == ' ')
            {
                ++i;
            }

            cnt = 0;
            while (i < len && word[i] != ' ')
            {
                if(word[i] >= 'A' && word[i] <= 'Z') ++cnt;
                ++i;
            }
            MAX = max(cnt, MAX);
        }
        printf("%d\n", MAX);
    }
    return 0;
}