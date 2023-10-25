//  ###   ###  ######  ####    ######  ##    ##  ###   ###
//  #### ####  ##      ## ##     ##    ##    ##  #### ####
//  ## ### ##  ######  ##  ##    ##    ##    ##  ## ### ##
//  ##     ##  ##      ## ##     ##    ##    ##  ##     ##
//  ##     ##  ######  ####    ######    ####    ##     ##

// 1802 Maximum Value at a Given Index in a Bounded Array

// You are given three positive integers : n, index, and maxSum.You want
// to construct an array nums(0 - indexed) that satisfies the following conditions :

//     nums.length == n
//     nums[i] is a positive integer where 0 <= i < n.
//     abs(nums[i] - nums[i + 1]) <= 1 where 0 <= i < n - 1.
//     The sum of all the elements of nums does not exceed maxSum.
//     nums[index] is maximized.

// Return nums[index] of the constructed array.

// Note that abs(x) equals x if x >= 0, and-x otherwise.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long findSum(int n, int index, int maxvalue)
    {
        long long count = maxvalue, m = maxvalue - 1;

        int r = n - index - 1, l = index;

        if (r < m)
        {
            count += (m * (m + 1) / 2) + ((m - r) * (m - r + 1) / 2);
        }
        else
        {
            count += (m * (m + 1) / 2) + (r - m);
        }
        if (l < m)
        {
            count += (m * (m + 1) / 2) + ((m - l) * (m - l + 1) / 2);
        }
        else
        {
            count += (m * (m + 1) / 2) + (l - m);
        }
        return count;
    }

    int maxValue(int n, int index, int maxSum)
    {
        int s = 1, e = maxSum;
        long long mid, sum, res;
        while (s <= e)
        {
            mid = (s + e) / 2;
            sum = findSum(n, index, mid);
            if (sum == maxSum)
            {
                return mid;
            }
            if (sum > maxSum)
            {
                e = mid - 1;
            }
            if (sum < maxSum)
            {
                res = mid;
                s = mid + 1;
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.maxValue(3, 2, 18) << endl;
    return 0;
}

// 1 2 3 2

// 2 1    =>1  4
// 2

// 6 1 10
//  5 => 4 5 4 3 2 1 =>