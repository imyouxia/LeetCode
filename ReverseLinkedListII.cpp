#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL)
    {
    
    }
};

class Solution
{
public:
    ListNode *reverseBetween(ListNode *head,int m,int n)
    {
        ListNode prev_head(0);
        prev_head.next = head;
        ListNode *prev = &prev_head;
        ListNode *current = head;

        for(int i = 0; i < m - 1; i++)
        {
            prev = prev->next;
            current = current->next;
        }

        ListNode *end = current;
        for(int i = m - 1; i < n; i++)
        {
            ListNode *next = current->next;
            current->next = prev->next;
            prev->next = current;
            current = next;
        }
        
        end->next = current;
        return prev_head.next;        
    }        

};

int main()
{

}

