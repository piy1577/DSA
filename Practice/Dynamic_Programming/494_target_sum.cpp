#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    unordered_map<int, unordered_map<int, int>> dp;
    int backtrack(vector<int> &nums, int index, int total, int &target)
    {
        if (index == nums.size() && total != target)
        {
            return 0;
        }

        if (dp.count(index))
        {
            if (dp[index].count(total))
            {
                return dp[index][total];
            }
        }

        dp[index][total] = backtrack(nums, index + 1, total + nums[index], target) + backtrack(nums, index + 1, total - nums[index], target);
        return dp[index][total];
    }

    int findTargetSumWays(vector<int> &nums, int target)
    {
        dp[nums.size()][target] = 1;
        return backtrack(nums, 0, 0, target);
    }
};

int main()
{
    vector<int> nums = {1, 1, 1, 1, 1};
    Solution s;
    cout << s.findTargetSumWays(nums, 3) << endl;
}

//           0
//        -1   1
//      -2   0   2
//    -3  -1   1   3
//   -4 -2   0   2  4
// -5  -3  -1  1   3  5
