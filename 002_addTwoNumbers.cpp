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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int up = 0;  //up 代表进位
        int temp = 0;
        ListNode* l3 = new ListNode(0);
        ListNode* p = l3 ;
        while(l1 && l2)
        {
            temp= (l1->val+l2->val+up)%10 ;
            up  = (l1->val+l2->val+up)/10;
            ListNode* newNode = new ListNode(temp);
            p->next = newNode;
            p = newNode;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1)
        {
            temp = (l1->val + up)%10;
            up = (l1->val + up)/10;
            ListNode* newNode = new ListNode(temp);
            p->next = newNode;
            p = newNode;
            l1 = l1->next;
        }
        while(l2)
        {
            temp = (l2->val + up)%10;
            up = (l2->val + up)/10;
            ListNode* newNode = new ListNode(temp);
            p->next = newNode;
            p = newNode;
            l2 = l2->next;
        }

         if(up)
        {
            ListNode* newNode = new ListNode(up);
            p->next = newNode;
            p = newNode;
        }


        return l3->next;

    }
};
