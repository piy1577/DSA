//  ###   ###  ######  ####    ######  ##    ##  ###   ###
//  #### ####  ##      ## ##     ##    ##    ##  #### ####
//  ## ### ##  ######  ##  ##    ##    ##    ##  ## ### ##
//  ##     ##  ##      ## ##     ##    ##    ##  ##     ##
//  ##     ##  ######  ####    ######    ####    ##     ##

// 56 Merge Intervals

// Given an array of intervals where intervals[i]
// = [ starti, endi ], merge all overlapping intervals, and
// return an array of the non - overlapping intervals that
// cover all the intervals in the input.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        // Greedy
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        ans.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++)
        {
            if (ans.back()[1] >= intervals[i][0])
            {
                if (ans.back()[1] < intervals[i][1])
                {
                    ans.back()[1] = intervals[i][1];
                }
            }
            else
            {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> nums = {
        {1, 3},
        {2, 6},
        {8, 10},
        {15, 18}};

    vector<vector<int>> ans = s.merge(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
    return 0;
}

//-------------------------------------------------------------------------------------
// Example-1
// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
//-------------------------------------------------------------------------------------
// Example-2
// Input: intervals = [[1,4],[4,5]]
// Output: [[1,5]]
//-------------------------------------------------------------------------------------