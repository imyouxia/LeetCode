#include <iostream>

using namespace std;

class Solution
{
public:
	double pow(double x,int n)
	{
		if(x < 0)
			return (n % 2 == 0) ? pow(-x,n):-pow(-x,n);
		if(x == 0 || x == 1)
			return x;
		if(n < 0)
			return 1.0 / pow(x,-n);
		if(n == 0)
			return 1.0;

		double half = pow(x, n / 2);
		if(n % 2 == 0)
			return half * half;
		else
			return x * half * half;

	}
};

int main()
{


}
