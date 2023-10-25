//  ###   ###  ######  ####    ######  ##    ##  ###   ###
//  #### ####  ##      ## ##     ##    ##    ##  #### ####
//  ## ### ##  ######  ##  ##    ##    ##    ##  ## ### ##
//  ##     ##  ##      ## ##     ##    ##    ##  ##     ##
//  ##     ##  ######  ####    ######    ####    ##     ##

// 287 Fint the Duplicate Number

// Given an array of integers nums containing n + 1 integers where each integer is in the range[1, n] inclusive.

// There is only one repeated number in nums,return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        // tortoise method {
        int s, f;
        s = f = nums[0];

        do
        {
            s = nums[s];
            f = nums[nums[f]];
        } while (s != f);

        // }
        f = nums[0];
        while (s != f)
        {
            s = nums[s];
            f = nums[f];
        }
        return f;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << s.findDuplicate(nums) << endl;
}

//-------------------------------------------------------------------------------------
// Example-1

// Input : nums = [ 1, 3, 4, 2, 2 ]
// Output : 2

// Explanation:
// Tortoise method
//  f = 1, s = 1
//  f = 2, s = 3
//  f = 2, s = 2

//  f = 1, s = 2
//  f = 3, s = 4
//  f = 2, s = 2

//-------------------------------------------------------------------------------------
// Example-2

// Input: nums = [3,1,3,4,2]
// Output : 3
//-------------------------------------------------------------------------------------