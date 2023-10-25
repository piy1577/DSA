//  ###   ###  ######  ####    ######  ##    ##  ###   ###
//  #### ####  ##      ## ##     ##    ##    ##  #### ####
//  ## ### ##  ######  ##  ##    ##    ##    ##  ## ### ##
//  ##     ##  ##      ## ##     ##    ##    ##  ##     ##
//  ##     ##  ######  ####    ######    ####    ##     ##

// 75 Sort Colors

// Given an array nums with n objects colored red, white,
// or blue, sort them in - place so that objects of the same
// color are adjacent, with the colors in the order red,
// white, and blue.

// We will use the integers 0, 1, and 2 to represent the
// color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        // DNF Sort
        int red = 0, white = 0, blue = nums.size() - 1;

        while (white <= blue)
        {
            if (nums[white] == 1)
            {
                white++;
            }
            else if (nums[white] == 0)
            {
                swap(nums[white], nums[red]);
                red++;
                white++;
            }
            else
            {
                swap(nums[white], nums[blue]);
                blue--;
            }
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    s.sortColors(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}

//-------------------------------------------------------------------------------------
// Example-1

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

// Explanation: red= 2, white=2, blue=0
//              red= 0, white=0, blue=2 (swap)
//              red= 0, white=0, blue=1
//              red= 2, white=2, blue =1
//              red =1, white=1, blue=2 (swap)
//              red =1, white=1, blue=1
//-------------------------------------------------------------------------------------
// Example-2

// Input: nums = [2,0,1]
// Output: [0,1,2]
//-------------------------------------------------------------------------------------