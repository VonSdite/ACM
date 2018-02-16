#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int vis[256], start = -1, res = 0;
       memset(vis, -1, sizeof(vis));
       for (int  i = 0; i < (int)s.size(); ++i)
       {
           if (vis[s[i]] > start) start = vis[s[i]];
           vis[s[i]] = i;
           res = max(res, i-start);
       }
       return res;
    }
};

int main(int argc, char const *argv[])
{
    string s = "";
    int res = Solution().lengthOfLongestSubstring(s);
    printf("%d\n", res);
    return 0;
}