#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
	vector<vector<int> > combinationSum(vector<int> &candiates,int target)
	{
		vector<vector<int> >res;
		sort(candiates.begin(),candiates.end());
		vector<int> com;
		combinationSum2(candiates,target,0,com,res);
		return res;
	}

	void combinationSum2(vector<int> &num,int target,int start,vector<int> &com,vector<vector<int> > &res)
	{
		if(target == 0)
		{
			res.push_back(com);
			return;
		}
		int i;
		for(i = start; i < num.size() && target >= num[i]; ++i)
		{
			com.push_back(num[i]);
			combinationSum2(num,target-num[i],i,com,res);
			com.pop_back();
		}

	}
};

int main()
{
	Solution solution;
	int a[] = {2,3,6,7};
	vector<int> p(a,a+4);
	int p1;
	vector< vector<int> > p2;
	p1 = 7;
	p2 = solution.combinationSum(p,p1);
	
	vector< vector<int> >::iterator iter;
   	vector<int>::iterator iter1;
	
	for(iter = p2.begin(); iter != p2.end(); iter++)
	{
		for(iter1 = (*iter).begin(); iter1 != (*iter).end(); iter1++)
		{
			cout<<*iter1<<" ";
		}
		cout<<endl;
	
	}	
	
	return 0;
}
