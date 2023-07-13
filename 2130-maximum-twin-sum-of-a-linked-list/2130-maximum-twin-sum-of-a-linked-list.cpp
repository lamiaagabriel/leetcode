class Solution {
public:
    int pairSum(ListNode* head) {
        stack<int> s;
        queue<int> q;
        int _max = 0;
        
        
        while(head != nullptr) {
            s.push(head->val);
            q.push(head->val);
            
            head = head->next;
        }
        
        while (!(s.empty() || q.empty())) {
            _max = std::max(_max, s.top() + q.front());
            
            s.pop();
            q.pop();
        }
        
        return _max;
    }
};