//  ###   ###  ######  ####    ######  ##    ##  ###   ###
//  #### ####  ##      ## ##     ##    ##    ##  #### ####
//  ## ### ##  ######  ##  ##    ##    ##    ##  ## ### ##
//  ##     ##  ##      ## ##     ##    ##    ##  ##     ##
//  ##     ##  ######  ####    ######    ####    ##     ##

// 73. Set Matrix Zeroes

// Given an m x n integer matrix matrix, if an element is 0, set its entire
// row and column to 0's.

// You must do it in place.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int col0 = matrix[0][0];

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (j == 0)
                {
                    if (matrix[i][j] == 0)
                    {
                        col0 = 0;
                    }
                }
                else if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for (int i = matrix.size() - 1; i >= 0; i--)
        {
            for (int j = matrix[i].size() - 1; j >= 1; j--)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
            if (col0 == 0)
                matrix[i][0] = 0;
        }
    }
};

int main()
{
    Solution s;
    vector<vector<int>> matrix = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}};

    s.setZeroes(matrix);

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

//-------------------------------------------------------------------------------------

// Example-1
// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output : [ [ 1, 0, 1 ], [ 0, 0, 0 ], [ 1, 0, 1 ] ]

//-------------------------------------------------------------------------------------

// Example-2
// Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
// Output : [ [ 0, 0, 0, 0 ], [ 0, 4, 5, 0 ], [ 0, 3, 1, 0 ] ]

//-------------------------------------------------------------------------------------