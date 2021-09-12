/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* createList(vector<int> nums)
{
	ListNode* dummy=new ListNode(0);
	ListNode* p=dummy;
	for (auto num : nums)
	{
		p->next = new ListNode(num);
		p = p->next;
	}
	return dummy->next;
}

int getLength(ListNode* head)
{
	ListNode* p = head;
	int length{ 0 };
	while (p) {
		length++;
		p = p->next;
	}
	return length;
}

ListNode* reverseKGroup(ListNode* head, int k) {
	int length = getLength(head);
	if (k == 1 || length < k)
		return head;
	vector<int> temp;
	while (head)
	{
		temp.push_back(head->val);
		head = head->next;
	}
	for (int i = 0; (i + 1)*k <= temp.size(); i++)
	{
		reverse(temp.begin() + i * k, temp.begin() + (i + 1)*k);
	}
	head = createList(temp);
	return head;

}
};
