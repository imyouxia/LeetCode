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
	ListNode *mergeTwoLists(ListNode *l1,ListNode *l2)
	{
		if(l1 == NULL)
			return l2;
		else if(l2 == NULL)
			return l1;
	
		ListNode *list;
		ListNode *head;
		if(l1->val > l2->val)
		{
			list = l2;
			l2 = l2->next;
		}
		else 
		{
			list = l1;
			l1 = l1->next;
		}
		head = list;

		while(l1 != NULL && l2 != NULL)
		{
			if(l1->val > l2->val)
			{
				list->next = l2;
				list = l2;
				l2 = l2->next;
			}
			else
			{
				list->next = l1;
				list = l1;
				l1 = l1->next;
			
			}

		}

		if(l1 != NULL)
		{
			list->next = l1;
		}

		if(l2 != NULL)
		{
			list->next = l2;
		}

		return head;
	}		
};

int main()
{
	Solution solution;
	ListNode *p1,*p2;
	ListNode *head;

	p1 = new ListNode(1);
	p1->next = new ListNode(3);
	p1->next->next = new ListNode(5);	
	
	p2 = new ListNode(2);
	p2->next = new ListNode(4);
	p2->next->next = new ListNode(6);

	head = solution.mergeTwoLists(p1,p2);
	
	while(head != NULL)
	{
		cout<<head->val<<" ";
		head = head->next;
			
	}
	cout<<endl;
	return 0;
}


