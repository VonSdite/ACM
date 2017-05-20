// #include <bits/stdc++.h>

// using namespace std;

// unordered_map<string, bool> record;

// int main(int argc, char const *argv[])
// {
//     int n;
//     string oper, s;
//     while (~scanf("%d", &n))
//     {
//         record.clear();
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> oper >> s;
//             if("insert" == oper) record[s] = true;
//             else
//             {
//                 if(record[s]) printf("yes\n");
//                 else printf("no\n");
//             }
//         }
//     }
//     return 0;
// }


#include <stdio.h>
#include <string.h>

#define M 1046527
#define NIL (-1)
#define L 14

char H[M][L];

int getChar(char ch)
{
    if('A' == ch) return 1;
    else if('C' == ch) return 2;
    else if('G' == ch) return 3;
    else if('T' == ch) return 4;
    else return 0;
}

long long getKey(char str[])
{
    long long sum = 0, p =1, i;
    for (i = 0; i < strlen(str); ++i)
    {
        sum += p*(getChar(str[i]));
        p *= 5;
    }
    return sum;
}

int h1(int key)
{
    return key % M;
}

int h2(int key)
{
    return 1+(key % (M-1));
}

int find(char str[])
{
    long long key, i, h;
    key = getKey(str);
    for(i=0;;++i)
    {
        h = (h1(key)+i*h2(key)) % M;
        if(strcmp(H[h], str) == 0) return 1;
        else if(strlen(H[h])==0) return 0;
    }
    return 0;
}

int insert(char str[])
{
    long long key, i, h;
    key = getKey(str);
    for(i=0; ; ++i)
    {
        h = (h1(key)+i*h2(key)) %M;
        if(strcmp(H[h], str) == 0) return 1;
        else if(strlen(H[h]) == 0)
        {
            strcpy(H[h], str);
            return 0;
        }
    }
}

int main(int argc, char const *argv[])
{
    int i, n, h;
    char str[L], com[9];
    for (i = 0; i < M; ++i)
    {
        H[i][0] = '\0';
    }
    scanf("%d", &n);
    for(i=0; i<n; ++i)
    {
        scanf("%s %s", com, str);
        if('i' == com[0]) insert(str);
        else
        {
            if(find(str))
            {
                printf("yes\n");
            }
            else printf("no\n");
        }
    }
    return 0;
}