#include <vector>
#include <iostream>
#include <string.h>

using namespace std;

class Solution
{
public:
    int numTrees(int n)
    {
        int result = 0;
        if(n == 0 || n == 1)
        {
            return 1;
        }
        else if(n == 2)
        {
            return 2;
        }

        // from 1 to n ,compute root
        for(int i = 1; i <= n; i++)
        {
            result += numTrees(i - 1) *numTrees(n - i);
        }

        return result;
    }    

};

class Solutiion2
{
public:
    int numTrees(int n)
    {
        int f[n+1];
        memset(f,0,sizeof(int)*(n+1));
        f[0] = 1;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                f[i] += f[j] * f[i - 1- j];
            }
        }
        return f[n];
    }

};

class Solution3
{
public:
    int numTrees(int n)
    {
        if( n <= 1)
            return n;
        int *ways = new int[n + 1];
        ways[0] = 1;
        ways[1] = 1;
        for(int i = 2; i <= n; ++i)
        {
            ways[i] = 0;
            for(int left = 0; left < i; ++left)
            {
                // with number of left nodes in the left sub-tree
                int lways = ways[left];
                int rways = ways[i - left - 1];
                ways[i] += lways * rways;
            }
        }

        int ret = ways[n];
        delete []ways;
        return ret;
    }

};
int main()
{

}
