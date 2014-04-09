#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution
{
public:
	int threeSumClosest(vector<int> &num,int target)
	{
		int N = num.size();
		sort(num.begin(),num.end());
		int value = num[0] + num[1] + num[2];
		int k;
		for(k = 0; k < N - 2; k++)
		{
			int i = k + 1, j = N - 1;
			while(i < j)
			{
				int sum = num[k] + num[i] + num[j];
				if(abs(sum - target) < abs(value - target))
					value = sum;
				if(sum < target)
					i++;
				else if(sum > target)
					j--;
				else
					return sum;			
			}			
		
		}
		return value;
			
	}
};

int main()
{
	Solution solution;
	int a[] = {-1,2,1,-4};
	vector<int> p(a,a+4);
	int p1,p2;
	p1 = 1;
	p2 = solution.threeSumClosest(p,p1);
	cout<< p2 << endl;
	return 0;
}

