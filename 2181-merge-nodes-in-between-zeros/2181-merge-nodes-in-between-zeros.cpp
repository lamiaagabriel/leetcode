class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *cursor, *tail;
        int sum;
        if(head == nullptr) return nullptr;

        // the first is 0, so start from the second.
        cursor = head->next;
        head = nullptr;
        tail = nullptr;
        sum = 0;

        while(cursor != nullptr) {
            if(cursor->val != 0) { // sum the non-zero values, and go next
                sum += cursor->val;
                cursor = cursor->next;
                continue;
            }

            if(head == nullptr) { // found the first zero, start a linked list that has the sum of each period.
                head = new ListNode(sum, nullptr);
                tail = head;
                sum = 0;
                cursor = cursor->next;
                continue;
            }

            // continue adding the summation.
            tail->next = new ListNode(sum, nullptr);
            tail = tail->next;
            sum = 0;
            cursor = cursor->next;
        }

        return head;     
    }
};