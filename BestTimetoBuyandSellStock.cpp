#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int maxProfit(vector<int> &prices)
	{
		unsigned int i;
		int min = 0;
		int value = 0;

		for(i = 1; i < prices.size(); i++)
		{	
			if(prices[i] < prices[min])
				min = i;
			//当前值减去当前最小值，即为最大差
			value = max(value,prices[i] - prices[min]);
		}

		return value;
	}
};

int main()
{

}
