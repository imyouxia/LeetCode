#include <iostream>

using namespace std;

class Solution
{
public:
	int maxSubArray(int A[],int n)
	{
		int count = 0;
		int sum = A[0];
		int i;
		for(i = 0; i < n; i++)
		{
			count += A[i];
			if(count < 0)
			{
				sum = sum > count ? sum : count;
				count = 0;
			}
			else
			{
				sum = sum > count ? sum : count;
			}
		}
		return sum;	
	}
};

int main()
{


}
