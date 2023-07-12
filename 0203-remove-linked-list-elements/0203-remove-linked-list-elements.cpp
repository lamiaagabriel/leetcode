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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *cursor, *tail;

        if(head == nullptr) return nullptr;
        
        cursor = head;
        head = nullptr;
        tail = nullptr;
        while(cursor != nullptr) {
            if(cursor->val == val) { // skip till get the first value that differs.
                cursor = cursor->next;
                continue;
            }
            
            if(head == nullptr) { // first value to be considered.
                head = new ListNode(cursor->val, nullptr);
                tail = head;
                cursor = cursor->next;
                continue;
            }
            
            // add the rest of values at the end.
            tail->next = new ListNode(cursor->val, nullptr);
            tail = tail->next;
            cursor = cursor->next;
        }

        return head;
    }
};