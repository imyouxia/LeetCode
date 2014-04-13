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
	ListNode *deleteDuplicates(ListNode *head)
	{
		if(head == NULL || head->next == NULL)
			return head;
		ListNode *curNode = head;
		while(curNode != NULL && curNode->next != NULL)
		{
			if(curNode->val == curNode->next->val)
			{
				ListNode *nextNode = curNode->next;
				curNode->next = nextNode->next;
				delete nextNode;
			}
			else
			{
				curNode = curNode->next;
			}	
		}
		return head;
	}
};

int main()
{
	Solution solution;
	ListNode *head = new ListNode(1);
	head->next = new ListNode(1);
	head->next->next = new ListNode(2);
	head = solution.deleteDuplicates(head);

	while(head != NULL)
	{
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;

	ListNode *head2 = new ListNode(1);
	head2->next = new ListNode(1);
	head2->next->next = new ListNode(2);
	head2->next->next->next = new ListNode(3);
	head2->next->next->next->next = new ListNode(3);
	head2 = solution.deleteDuplicates(head2);

	while(head2 != NULL)
	{
		cout << head2->val << " ";
		head2 = head2->next;
	}
	cout << endl;

	return 0;
	
}
