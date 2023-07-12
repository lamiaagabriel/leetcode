class Solution {
public:    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head, *tail;
        
        // if one of them is null, return the other.
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;
        
        // get the smallest value as the starting point, then skip it.
        if(list1->val <= list2->val) {
            head = new ListNode(list1->val, nullptr);
            list1 = list1->next;
        } else {
            head = new ListNode(list2->val, nullptr);
            list2 = list2->next;
        }
        
        
        tail = head;
        // iterate and save the samllest one as the tail.
        while(list1 != nullptr && list2 != nullptr) {
            if(list1->val <= list2->val) {
                tail->next = new ListNode(list1->val, nullptr);
                list1 = list1->next;
            } else {
                tail->next = new ListNode(list2->val, nullptr);
                list2 = list2->next;
            }
            
            tail = tail->next;
        }

        // loop over the rest of the longest list.
        while(list1 != nullptr) {
            tail->next = new ListNode(list1->val, nullptr);
            list1 = list1->next;
            
            tail = tail->next;
        }
        
        while(list2 != nullptr) {
            tail->next = new ListNode(list2->val, nullptr);
            list2 = list2->next;
            
            tail = tail->next;
        }

        return head;
    }
};