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
    ListNode *partition(ListNode *head,int x)
    {
        ListNode less_head(0);
        ListNode no_less_head(0);
        ListNode *less = &less_head;
        ListNode *no_less = &no_less_head;

        ListNode *node = head;
        while(node != NULL)
        {
            if(node->val < x)
            {
                less->next = node;
                node = node->next;
                less = less->next;
            }
            else
            {
                no_less->next = node;
                node = node->next;
                no_less = no_less->next;
            
            }
        }

        no_less->next = NULL;
        less->next = no_less_head.next;
        return less_head.next;
    }

};

int main()
{

}
