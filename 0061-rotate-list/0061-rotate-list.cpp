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
    ListNode* newtailh(int v ,ListNode*temp){
        if(v == 0) return temp;
        int cnt = 1;
        while(temp!=NULL){
            if(cnt == v) return temp;
            temp = temp->next;
            cnt++;
        }
        return NULL;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL|| head ->next == NULL) return head;
        ListNode*tail = head;
        ListNode*temp = head;
        int len = 1;
        while(tail->next != NULL){
            len++;
            tail = tail->next;
        }
        if(k%len ==0) return head;
        k = k%len;
        ListNode* newtail = newtailh(len-k, head);
        tail->next = head;
        head = newtail->next;
        newtail->next =  NULL;
        return head;
    }
};