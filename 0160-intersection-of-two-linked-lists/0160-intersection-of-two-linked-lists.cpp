class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::set<ListNode*> s;

        while (headA != nullptr) {
            s.insert(headA);
            headA = headA->next;
        }

        while (headB != nullptr) {
            if (s.count(headB) > 0)
                return headB;

            headB = headB->next;
        }

        return nullptr;
    }
};