#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector< vector<int> > combine(int n,int k)
    {
        vector< vector<int> > res;
        vector<int> temp;
        recurse(n,k,1,temp,res);
        return res;      
    }

    void recurse(int n,int k,int start,vector<int> &temp,vector< vector<int> > &res)
    {
        int m = temp.size();
        if(m == k)
        {
            res.push_back(temp);
            return;
        }

        for(int i = start; i <= n-(k-m)+1;++i)
        {
            temp.push_back(i);
            recurse(n,k,i+1,temp,res);
            temp.pop_back();
        }
    }

};

int main()
{

}

