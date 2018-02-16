#include <unordered_map>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> record;
        int len = (int)nums.size();
        int tmp;
        vector<int> res;
        
        for (int i = 0; i < len; ++i)
        {
            tmp = target - nums[i];
            if (record.find(tmp) != record.end())
            {
                res.push_back(i);
                res.push_back(record[tmp]);
                break;
            }
            record[nums[i]] = i;
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    std::vector<int> v = {3,2,4};
    std::vector<int> res = Solution().twoSum(v, 6);
    for (auto i: res)
    {
        printf("%d\n", i);
    }
    return 0;
}