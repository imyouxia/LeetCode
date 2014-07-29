#include <iostream>

using namespace std;

class Solution
{
public:
    int numDecodings(string s)
    {
        if(s.empty() || s[0] == '0')
        {
            return 0;
        }
        int N = s.size();
        int dp[N+1];
        dp[0] = 1;
        dp[1] = 1;

        for(int i = 1; i < N; ++i)
        {
            if(s[i] == '0')
            {
                if(s[i-1] != '1' && s[i-1] != '2')
                    return 0;
                dp[i+1] = dp[i-1];
            }
            else
            {
                int num = s[i] - '0' + (s[i-1] - '0') * 10;
                if(num >= 11 && num <= 26)
                {
                    dp[i+1] = dp[i] + dp[i-1];
                }
                else
                {
                    dp[i+1] = dp[i];
                }
            }
        }
        return dp[N];
    }

};

int main()
{

}

