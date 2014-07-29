#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool exist(vector<vector<char> > &board,string word)
    {
        const int N = board.size();
        if(N == 0)
            return false;
        const int M = board[0].size();

        for(int i = 0; i < N; ++i)
            for(int j = 0; j < M; ++j)
            {
                if(board[i][j] == word[0] && find(i,j,board,1,word))
                    return true;
            }
        return false;
    }


};


int main()
{
    Solution solution;
    vector<vector<char> > board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    cout << (true == solution.exist(board,"ABCCED")) <<endl;
    cout << (true == solution.exist(board,"SEE")) << endl;
    cout << (false == solution.exist(board,"ABCB")) << endl;
    
    return 0;
}
