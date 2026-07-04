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
    ListNode*reversek(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp!= NULL){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = reversek(l1);
        ListNode* t2 = reversek(l2);
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        int carry = 0;
        while( t1 != NULL || t2 != NULL){
            int sum = carry;
            if(t1) sum+=t1->val;
            if(t2) sum+=t2->val;
            ListNode* newnode = new ListNode (sum%10);
            carry = sum/10;
            curr->next = newnode;
            curr = newnode;
            if(t1) t1 = t1->next;
            if(t2) t2 = t2->next;
        }
        if(carry){
           ListNode* newnode = new ListNode(carry);
           curr->next = newnode;
        } 
        ListNode* temp1 = reversek(dummy->next);
        while(temp1->val == 0 && temp1->next != NULL){
            temp1 = temp1->next;
        }
        return temp1;

    }
};