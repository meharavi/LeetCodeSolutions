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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head or (!head->next and n==1)) return NULL;
        ListNode *temp = head;
        int size=0;
        while(temp){
            size++;
            temp=temp->next;   
        }
        
        int rem = size-n;
        if(rem==0)return head->next;
        temp = head;
        while(rem-1){  
            temp=temp->next;
            rem--;
        }
        
        temp->next = temp->next->next;
        return head;

    }
};