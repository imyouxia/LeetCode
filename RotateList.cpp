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
	ListNode *rotateRight(ListNode *head,int k)
	{
		if(head == NULL || k < 0)
			return head;
		int len = 1;
		ListNode *curNode = head;
		for(; curNode->next != NULL; curNode = curNode->next)
			len++;
		curNode->next = head;
		len = len - k % len;
		for(; len > 0; len--)
		{
			curNode = curNode->next;
		}
		head = curNode->next;
		curNode->next = NULL;
		return head;

	}

};

int main()
{
	Solution solution;
	ListNode *head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	head = solution.rotateRight(head,2);
	
	while(head != NULL)
	{
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
	return 0;
}

