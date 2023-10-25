//  #####      ###       #####    ##   ##
//  ##        ## ##     ##    ##   ## ##
//  #####    #######     #####      ###
//  ##      ##     ##  ##     ##     ##
//  #####  ##       ##    ####       ##

// 1351. Count Negative Numbers in a Sorted Matrix

// Given a m x n matrix grid which is sorted in non
// - increasing order both row - wise and column - wise,
// return the number of negative numbers in grid.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = (grid[i].size()) - 1; j >= 0; j--)
            {
                if (grid[i][j] >= 0)
                {
                    break;
                }
                count++;
            }
        }
        return count;
    }
};

int main()
{
    vector<vector<int>> grid = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}};
    Solution s;
    cout << s.countNegatives(grid) << endl;
    return 0;
}

//--------------------------------------------------------------------------
// Example-1
//  Input : grid = [ [ 4, 3, 2, -1 ],
//  [ 3, 2, 1, -1 ],
//  [ 1, 1, -1, -2 ],
//  [ -1, -1, -2, -3 ] ]
// Output : 8
// Explanation : There are 8 negatives number in the matrix.
//--------------------------------------------------------------------------
// Example-2
// Input : grid = [ [ 3, 2 ], [ 1, 0 ] ]
// Output : 0
//--------------------------------------------------------------------------