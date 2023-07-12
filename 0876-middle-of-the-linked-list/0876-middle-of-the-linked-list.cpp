class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
        ListNode* middle = head;
        int pos = 1;

        // When head reaches the end, the middle is still at half distance.
        while (head != nullptr) {
            if (pos % 2 == 0)
                middle = middle->next;

            head = head->next;
            pos++;
        }

        return middle;
    }
};