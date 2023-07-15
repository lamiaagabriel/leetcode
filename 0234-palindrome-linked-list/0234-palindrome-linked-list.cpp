class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        queue<int> q;

        while (head != nullptr) {
            s.push(head->val);
            q.push(head->val);

            head = head->next;
        }

        while (!s.empty() && !q.empty()) {
            if (s.top() != q.front()) return false;

            s.pop();
            q.pop();
        }

        return true;
    }
};