#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector< vector<int> > subsets(vector<int> &S)
    {
        sort(S.begin(),S.end());
        vector< vector<int> > subsets;
        vector<int> subset;
        subset.reserve(S.size());
        subsets1(S,subsets,subset,0);
        
        return subsets;        
    }        

    void subsets1(vector<int> &S,vector< vector<int> > &subsets,vector<int> &temp,int idx)
    {
        if(idx == S.size())
        {
            subsets.push_back(temp);
            return;
        }

        temp.push_back(S[idx]);
        subsets1(S,subsets,temp,idx+1);
        temp.pop_back();

        subsets1(S,subsets,temp,idx+1);
    
    }
};

class Solution2 {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        vector<vector<int> > res;
        vector<int> emp;
        res.push_back(emp);
        sort(S.begin(), S.end());
        if(S.size() == 0) return res;
        for(vector<int>::iterator ind = S.begin(); ind < S.end(); ++ind){
            int size = res.size();
            for(int i = 0; i < size; ++i){
                vector<int> v;
                for(vector<int>::iterator j = res[i].begin(); j < res[i].end(); ++j){
                   v.push_back(*j);
                }
                v.push_back(*ind);
                res.push_back(v);
            }
        }
        return res;
    }
};

int main()
{

}
