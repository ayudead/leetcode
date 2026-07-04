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
    ListNode*findK(ListNode*temp , int k){
        k-=1;
        while(temp!=NULL && k>0){
            k--;
            temp = temp->next;
        }
        return temp;
    }

    ListNode*kreverse(ListNode*head){
        ListNode*temp = head;
        ListNode*prev = NULL;
        while(temp!= NULL){
            
            ListNode*front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp = head;
        ListNode*prevNode = NULL;
        while(temp!= NULL){
            ListNode*KNode = findK(temp , k);
            if (KNode == NULL) {
              if (prevNode != NULL)
               prevNode->next = temp;
              break;
            }
            ListNode*nextNode = KNode->next;
            KNode->next = NULL;
            ListNode* newHead = kreverse(temp);
            if(prevNode == NULL ) head = newHead;
            else prevNode->next =newHead ;
            temp->next  = nextNode;
            prevNode = temp;
            temp = nextNode;
        }
        return head;
    }
};