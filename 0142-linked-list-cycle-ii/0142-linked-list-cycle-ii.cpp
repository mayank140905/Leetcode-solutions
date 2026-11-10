/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                // cycle detected, set slow to head, fast meeting point pe hi rhega
                slow = head;
                while(slow != fast){
                    slow = slow-> next;
                    fast = fast->next;
                }
                // now they finally met, so we r at entering pt of cycle, cuz 
                // slow wld take same time from head to entry 
                // as same as fast takes from meeting to entry 
                return slow;
            }
        }
        return NULL;
    }
};