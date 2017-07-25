#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string goodStr;
    cin >> goodStr;

    unordered_map<char, bool> good;     // 记录好的字符
    int len = (int)goodStr.size();
    int pos_star = 0;
    for (int i = 0; i < len; ++i)
    {
        good[goodStr[i]] = true; 
    }

    string matchStr;
    cin >> matchStr;
    bool mode = false;                  // 用于判断匹配串是否有 '*'
    int matchStrSize = (int)matchStr.size();
    for (int i = 0; i < matchStrSize; ++i)
    {
        if(matchStr[i] == '*')
        {
            mode = true;
            pos_star = i;               // 记录出现'*'的位置
        }
    }

    int n;
    scanf("%d", &n);

    string queryStr;
    for (int j = 0; j < n; ++j)
    {
        cin >> queryStr;
        int queryStrSize = (int)queryStr.size();

        bool flag = true;

        if(mode)
        { // 匹配字符串如果有 '*'的情况
          // 有'*' 分成三段来匹配
          // '*' 前那段
          // '*' 时
          // '*' 后那段
          
            // '*' 前那段
            for (int i = 0; i < pos_star; ++i)
            {
                if(matchStr[i] == '?')
                {
                    if(!good[queryStr[i]])
                    {
                        flag = false;
                        break;
                    }
                }
                else
                {
                    if(matchStr[i] != queryStr[i])
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if(flag)
            {
                int q = pos_star;
                // '*'时
                while (queryStrSize - q != matchStrSize - pos_star - 1)
                {
                    if(good[queryStr[q]])
                    {
                        flag = false;
                        break;
                    }
                    ++q;
                }

                // '*'后那段
                if(flag)
                {
                    for (int i = pos_star+1; i < matchStrSize; ++i, ++q)
                    {
                        if(matchStr[i] == '?')
                        {
                            if(!good[queryStr[q]])
                            {
                                flag = false;
                                break;
                            }
                        }
                        else
                        {
                            if(matchStr[i] != queryStr[q])
                            {
                                flag = false;
                                break;
                            }
                        }
                    }
                }
            }
        }
        else
        { // 无'*'匹配时
            if(queryStrSize != matchStrSize) 
            {
                flag = false;
            }
            else
            {
                for (int i = 0; i < queryStrSize; ++i)
                {
                    if(matchStr[i] == '?')
                    {
                        if(!good[queryStr[i]])
                        {
                            flag = false;
                            break;
                        }
                    }
                    else
                    {
                        if(matchStr[i] != queryStr[i])
                        {
                            flag = false;
                            break;
                        }
                    }
                }
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}     