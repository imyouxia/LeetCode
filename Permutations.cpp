#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	vector< vector<int> > permute(vector<int> &num)
	{
		res.clear();
		vector<bool> data(num.size(),true); 
		vector<int> value;
		permute2(num,data,value);
			
		return res;
	}

	void permute2(vector<int> &num,vector<bool> &data,vector<int> &value)
	{
		if(value.size() == num.size())
		{
			res.push_back(value);
			return;
		}
		
		int i;
		for(i = 0; i < num.size(); ++i)
		{
			if(data[i])
			{
				data[i] = false;
				value.push_back(num[i]);
				permute2(num,data,value);
				value.pop_back();
				data[i] = true;
			}
		
		}
	}

private:
	vector< vector<int> > res;
};

int main()
{
	Solution solution;
	int a[] = {1,2,3};
	vector<int> p(a,a+3);

	vector< vector<int> > p1;
   	p1 	= solution.permute(p);
	
	vector< vector<int> >::iterator iter;
	vector<int>::iterator iter1;

	for(iter = p1.begin();iter != p1.end(); iter++)
	{
		for(iter1 = (*iter).begin(); iter1 != (*iter).end();iter1++)
		{
			cout << (*iter1) <<" ";
		}
		cout<<endl;
	}
	return 0;
}


