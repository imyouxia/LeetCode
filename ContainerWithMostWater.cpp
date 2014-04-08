#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int maxArea(vector<int> &height)
	{
		int size = height.size();
		int left = 0,right = size - 1;
		int max = 0;
		while(left < right)
		{
			int min_value = min(height[left],height[right]);
			int tmp = min_value * (right - left);
			max = max > tmp ? max : tmp;
			if(height[left] < height[right])
				left++;
			else
				right--;
		}

		return max;
	}
};

int main()
{

}
