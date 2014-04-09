#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
	vector< vector<int> > fourSum(vector<int> &num,int target)
	{
		int N = num.size();
		vector< vector<int> > res;
		if(N < 4)
			return res;
		sort(num.begin(),num.end());
		int i;
		for(i = 0; i < N; i++)
		{
			if(i > 0 && num[i] == num[i - 1]) //避免重复项
				continue;
			int j;
			for(j = i + 1; j < N; ++j)
			{
				if(j > i + 1 && num[j] == num[j - 1])
					continue;
				int twosum = target - num[i] - num[j];
				int left = j + 1,right = N - 1;
				while(left < right)
				{
					int sum = num[left] + num[right];
					if(sum == twosum)
					{
						vector<int> value(4);
						value[0] = num[i];
						value[1] = num[j];
						value[2] = num[left];
						value[3] = num[right];
						res.push_back(value);
						while(left < right && num[left + 1] == num[left])
							left++;
						while(left < right && num[right-1] == num[right])
							right--;
						left++;
						right--;		
					}	
					else if(sum < twosum)
						left++;
					else
						right--;
				}	
			
			}
		
		}
		return res;
	}
};

int main()
{
	Solution solution;
	int a[] = {1,0,-1,0,-2,2};
	vector<int> p(a,a+6);
	int p1 = 0;
	vector< vector<int> > p2;
	p2 = solution.fourSum(p,p1);
	vector< vector<int> >::iterator iter;
	vector<int>::iterator iter1;
	for(iter = p2.begin(); iter != p2.end(); iter++)
	{
		for(iter1 = (*iter).begin();iter1 != (*iter).end();iter1++)
		{
			cout<<(*iter1)<<" ";
		}
		cout<<endl;
	}
	return 0;
}

