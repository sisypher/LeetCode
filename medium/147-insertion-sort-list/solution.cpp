
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        // create dummy and assign next to head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        // point to the tail of the sorted list
        ListNode* sortedTail = dummy->next;
        
        // point to the current node to be sorted
        ListNode* cur = sortedTail->next;
        
        // while cur is not pointing to null
        while (cur) {
            // if current's node value is larger than the last sorted node
            // then make current the new last sorted node and move current
            // then continue to the next iteration
            if (cur->val > sortedTail->val) {
                sortedTail = cur;
                cur = sortedTail->next;
                continue;
            };
            
            ListNode* iter = dummy;
            
            // if current is larger then the iteration node, move iter
            while (cur->val > iter->next->val) {
                    iter = iter->next;
                };
                
                sortedTail->next = cur->next;
                cur->next = iter->next;
                iter->next = cur;
                
                // move current
                cur = sortedTail->next;
        };
        return dummy->next;
    }
};
