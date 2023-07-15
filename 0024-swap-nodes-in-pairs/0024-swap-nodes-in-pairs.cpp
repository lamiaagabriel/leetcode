class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *cursor, *tail;
        int i = 0;

        if(head == nullptr || head->next == nullptr) return head;

        tail = head;
        cursor = head->next;

        while(cursor != nullptr) {
           if(i % 2 == 0) {
                int temp =  cursor->val;
                cursor->val = tail->val;
                tail->val = temp;
           }

            cursor = cursor->next;
            tail = tail->next;
            i++;
        }

        return head;
    }
};