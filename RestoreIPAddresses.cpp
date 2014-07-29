#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    vector<string> restoreIpAddresses(string s)
    {
        vector<string> res;
        string ip;
        restoreIpAddressesRe(s,res,ip,0,0);
        return res;
    }

    void restoreIpAddressesRe(string &s,vector<string> &res,string &ip,int deep,int start)
    {
        if(deep == 4 && start == s.size())
        {
            res.push_back(ip);
        }
        if(deep == 4) return;

        int num = 0,Size = ip.size();
        if(Size != 0) ip.push_back('.');
        for(int i = start; i < s.size(); ++i)
        {
            num = num * 10 + s[i] - '0';
            if(num > 255) break;
            ip.push_back(s[i]);
            restoreIpAddressesRe(s,res,ip,deep+1,i+1);
            if(num == 0) break;
        }
        ip.resize(Size);
    }

};

int main()
{

}

