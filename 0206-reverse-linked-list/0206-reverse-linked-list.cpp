class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* reversed = nullptr;
        
        while(head != nullptr) {
            reversed = new ListNode(head->val, reversed);
            head = head->next;
        }

        return reversed;
    }
};