#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
	vector<vector<int> >threeSum(vector<int> &num)
	{
		vector< vector<int> > res;
		res.clear();
		sort(num.begin(),num.end());

		int i;
		for(i = 0; i < num.size(); i++)
		{
			if(i > 0 && num[i] == num[i - 1])
				continue;
			int j = i + 1;
			int k = num.size() - 1;
			
			while(j < k)
			{
				
				if(j > i + 1 && num[j] == num[j - 1])
				{
					j++;
					continue;
				}

				if(k < num.size() - 1 && num[k] == num[k + 1])
				{
					k--;
					continue;
				}
				
				int sum = num[i] + num[j] + num[k];

				if(sum == 0)
				{
					vector<int> a;
					a.push_back(num[i]);
					a.push_back(num[j]);
					a.push_back(num[k]);
					res.push_back(a);
					j++;
				}
				else if(sum < 0)
				{
					j++;
				}
				else
				{
					k--;
				}

					
			}	
		}
		return res;
	}
};

int main()
{
	Solution solution;
	
	vector<vector<int> > p1;
	int a[] = {-1,0,1,2,-1,-4};
	vector<int> p(a,a+6);	
	p1 = solution.threeSum(p);

	vector<vector<int> >::iterator iter;
	vector<int>::iterator iter1;
	for(iter = p1.begin();iter!=p1.end();iter++)
	{
		for(iter1 = (*iter).begin();iter1 != (*iter).end();iter1++)
		{
			cout << *iter1 << " ";
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}

