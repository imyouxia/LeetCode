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
	ListNode *removeNthFromEnd(ListNode *head,int n)
	{
		if(head == NULL)
			return head;
		ListNode *first = head;
		ListNode *second = head;
		while(n--)
			first = first->next;
		if(first == NULL)
			return head->next;		
		while(first->next)
		{
			first = first->next;
			second = second->next;
		}
		ListNode *temp = second->next;
		second->next = temp->next;
		delete temp;
		return head;
	}
};

int main()
{
	Solution solution;
	ListNode *p,*p1;
	p = new ListNode(1);
	p->next = new ListNode(2);
	p->next->next = new ListNode(3);
	p->next->next->next = new ListNode(4);
	p->next->next->next->next = new ListNode(5);
	//cout<<p<<endl;
	p1 = solution.removeNthFromEnd(p,2);
	
	while(p1 != NULL)
	{
		cout<< p1->val << " ";
		p1 = p1->next;
	}
	cout<<endl;
}
