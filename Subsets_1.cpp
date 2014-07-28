#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<vector<int> > subsets(vector<int> &S)
    {
        return subsets_1(S);
    }

    vector<vector<int> > subsets_1(vector<int> &S)
    {
        vector<vector<int> > res(1,vector<int>());
        sort(S.begin(),S.end());
        vector<int> set;
        int N = S.size();
        for(int l = 1; l <= N; ++l)
        {
            subsetsRe(S,l,0,set,res);
        }
        return res;
    }

    void subsetsRe(vector<int> &S,int L,int start,vector<int> &set,vector<vector<int> > &res)
    {
        int N = S.size(),M = set.size();
        if(M == L)
        {
            res.push_back(set);
            return;
        }

        for(int i = start; i <= N - (L-M); ++i)
        {
            set.push_back(S[i]);
            subsetsRe(S,L,i+1,set,res);
            set.pop_back();
        }
    }

};

int main()
{

}

