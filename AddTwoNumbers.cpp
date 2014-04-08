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
	ListNode *addTwoNumbers(ListNode *l1,ListNode *l2)
	{
		if(l1 == NULL && l2 == NULL)
			return NULL;
		
		ListNode *head = NULL;
		ListNode *pre = head;
		int flag = 0;

		while(l1 && l2)
		{
			ListNode *node = new ListNode(l1->val + l2->val + flag);
			flag = node->val / 10;
			node->val = node->val % 10;

			if(head == NULL)
				head = node;
			else
				pre->next = node;
		
			pre = node;
			
			l1 = l1->next;
			l2 = l2->next;
		}	
		
		while(l1)
		{
			ListNode *node = new ListNode(l1->val + flag);
			flag = node->val / 10;
			node->val = node->val % 10;

			if(head == NULL)
				head = node;
			else
				pre->next = node;
			pre = node;
			l1 = l1->next;
		}

		while(l2)
		{
			ListNode *node = new ListNode(l2->val + flag);
			flag = node->val / 10;
			node->val = node->val % 10;

			if(head == NULL)
				head = node;
			else
				pre->next = node;

			pre = node;
			l2 = l2->next;
		
		}

		if(flag > 0)
		{
			ListNode *node = new ListNode(flag);
			pre->next = node;
		}

		return head;
	}
};

int main()
{
	Solution solution;
	ListNode *l1 = new ListNode(2);
	l1->next = new ListNode(4);
	l1->next->next = new ListNode(3);

	ListNode *l2 = new ListNode(5);
	l2->next = new ListNode(6);
	l2->next->next = new ListNode(4);

	ListNode *value = solution.addTwoNumbers(l1,l2);
	while(value != NULL)
	{
		cout << value->val << " ";
		value = value->next;
	}
	cout<<endl;
	return 0;

}
