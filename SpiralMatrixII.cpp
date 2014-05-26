#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	vector< vector<int> > generateMatrix(int n)
	{
		if(n == 0)
			return vector< vector<int> >();
		vector< vector<int> > value(n,vector<int>(n));
		int imin = 0,imax = n - 1;
		int jmin = 0,jmax = n - 1;
		int number = 1;
		int i,j;
		while(1)
		{
			for(j = jmin;j <= imax; ++j)
				value[imin][j] = number++;
			if(++imin > imax)
				break;
			for(i = imin;i <= imax; ++i)
				value[i][jmax] = number++;
			if(jmin > -- jmax)
				break;
			for(j = jmax; j >= jmin; --j)
				value[imax][j] = number++;
			if(imin > --imax)
				break;
			for(i = imax; i >= imin; --i)
				value[i][jmin] = number++;
			if(++jmin > jmax)
				break;
		}	
		return value;
	
	}

};

int main()
{
	Solution solution;
	int p = 3;
	vector< vector<int> > p1;
	p1 = solution.generateMatrix(p);
	
	vector< vector<int> >::iterator iter;
	vector<int>::iterator iter1;
   	for(iter = p1.begin(); iter != p1.end(); iter++)
	{
		for(iter1 = (*iter).begin(); iter1 != (*iter).end(); iter1++)
		{
			cout<< *iter1<<" ";
		}
		cout<<endl;
	}	
	return 0;
}
