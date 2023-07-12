class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *cursor, *tail;
        if(head == nullptr) return nullptr;

        tail = head;
        cursor = head->next;
        while(cursor != nullptr) {
            if(tail->val == cursor->val)
                tail->next = cursor->next; // remove duplication, by changing the tail pointer.
            else 
                tail = tail->next; // save value to keep it, so we go to the next value
            
            // check the next value of tail, if exists.
            cursor =  (tail->next == nullptr)?  nullptr : tail->next;
        }

        return head;
    }
};