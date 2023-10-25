//  ###   ###  ######  ####    ######  ##    ##  ###   ###
//  #### ####  ##      ## ##     ##    ##    ##  #### ####
//  ## ### ##  ######  ##  ##    ##    ##    ##  ## ### ##
//  ##     ##  ##      ## ##     ##    ##    ##  ##     ##
//  ##     ##  ######  ####    ######    ####    ##     ##

// 79 Word Search

// Given an m x n grid of characters board and a string
// word, return true if word exists in the grid.

// The word can be constructed from letters of
// sequentially adjacent cells, where adjacent cells are
// horizontally or vertically neighboring.The same letter
// cell may not be used more than once.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> f;

    bool backtrack(vector<vector<char>> &board, string word, int x, int y, int z)
    {
        f[x][y] = 1;
        if (z == word.length() - 1)
        {
            return true;
        }
        if (x > 0 && (board[x - 1][y] == word[z + 1]) && f[x - 1][y] != 1)
        {
            if (backtrack(board, word, x - 1, y, z + 1))
                return true;
        }

        if (x < (board.size() - 1) && board[x + 1][y] == word[z + 1] && f[x + 1][y] != 1)
        {
            if (backtrack(board, word, x + 1, y, z + 1))
                return true;
        }

        if (y > 0 && board[x][y - 1] == word[z + 1] && f[x][y - 1] != 1)
        {
            if (backtrack(board, word, x, y - 1, z + 1))
                return true;
        }

        if (y < (board[0].size() - 1) && board[x][y + 1] == word[z + 1] && f[x][y + 1] != 1)
        {
            if (backtrack(board, word, x, y + 1, z + 1))
                return true;
        }
        f[x][y] = 0;
        return false;
    }

    bool exist(vector<vector<char>> &board, string word)
    {
        f = vector<vector<int>>(board.size(), vector<int>(board[0].size(), 0));

        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                if (board[i][j] == word[0])
                {
                    if (backtrack(board, word, i, j, 0))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

int main()
{
    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}};
    Solution s;
    string word = "ABCCED";

    cout << s.exist(board, word) << endl;
    return 0;
}

//-------------------------------------------------------------------------------------
// Example-1
// Input: board = [["A","B","C","E"],
// ["S","F","C","S"],
// ["A","D","E","E"]], word = "ABCCED"
// Output : true
//-------------------------------------------------------------------------------------
// Example-2
// Input: board = [["A","B","C","E"],
// ["S","F","C","S"],
// ["A","D","E","E"]], word = "SEE"
// Output : true
//-------------------------------------------------------------------------------------
// Example-3
// Input: board = [["A","B","C","E"],
// ["S","F","C","S"],
// ["A","D","E","E"]], word = "ABCB"
// Output : false
//-------------------------------------------------------------------------------------