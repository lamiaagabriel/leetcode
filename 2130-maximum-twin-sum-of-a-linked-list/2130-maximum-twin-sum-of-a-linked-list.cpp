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
    int pairSum(ListNode* head) {
        ListNode *cursor = head, *reversed = nullptr;
        int max = 0;
        
        
        while(cursor != nullptr) {
            reversed = new ListNode(cursor->val, reversed);
            cursor = cursor->next;
        }
        
        while(!(head == nullptr || reversed == nullptr)) {
            if(max < head->val + reversed->val)
                max = head->val + reversed->val;
            
            head = head->next;
            reversed = reversed->next;
        }
        
        return max;
    }
};