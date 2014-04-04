#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int,int> a,pair<int,int> b)
{
	return a.first < b.first;
}

class Solution
{
public:
	vector<int> twoSum(vector<int> &numbers,int target)
	{
		vector< pair<int,int> > nums(numbers.size());	
		unsigned int i;
		for(i = 0; i < numbers.size(); i++)
		{
			nums[i] = make_pair(numbers[i],i+1);
		}
		sort(nums.begin(),nums.end(),compare);
	
		int left = 0,right = nums.size() - 1;
		while(left < right)
		{
			int sum = nums[left].first + nums[right].first;
			if(sum == target)
				break;
			else if(sum < target)
				left++;
			else
				right--;
		}
			
		vector<int> value;
		value.push_back(min(nums[left].second,nums[right].second));
		value.push_back(max(nums[left].second,nums[right].second));
		return value;
	}	

};

int main()
{
	Solution solution;
	int a[] = {2,7,11,15};
	
	vector<int> p(a,a+4);
	vector<int> p2;
	
	p2 = solution.twoSum(p,9);
	cout<<p2[0] << " " << p2[1] <<endl;
	return 0;
}

