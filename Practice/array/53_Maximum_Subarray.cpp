//  ###   ###  ######  ####    ######  ##    ##  ###   ###
//  #### ####  ##      ## ##     ##    ##    ##  #### ####
//  ## ### ##  ######  ##  ##    ##    ##    ##  ## ### ##
//  ##     ##  ##      ## ##     ##    ##    ##  ##     ##
//  ##     ##  ######  ####    ######    ####    ##     ##

// 53 Maximum Subarray

// Given an integer array nums, find the subarray with the
// largest sum, and return its sum.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        // Kedane's Algorithm
        int curr = 0, max = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            curr += nums[i];
            if (curr > max)
            {
                max = curr;
            }
            if (curr < 0)
            {
                curr = 0;
            }
        }
        return max;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << s.maxSubArray(nums) << endl;
    return 0;
}

//-------------------------------------------------------------------------------------

// Example-1
//  Input : nums = [ -2, 1, -3, 4, -1, 2, 1, -5, 4 ]
//  Output : 6

//-------------------------------------------------------------------------------------

// Example-2
// Input: nums = [1]
// Output : 1

//-------------------------------------------------------------------------------------

// Example-3
// Input: nums = [5,4,-1,7,8]
// Output : 23

//-------------------------------------------------------------------------------------