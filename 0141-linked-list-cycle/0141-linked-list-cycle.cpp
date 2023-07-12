class Solution {
public: 

    bool hasCycle(ListNode *head) {
        // if it has no values, or one value --> false
        if (head == nullptr || head->next == nullptr)
            return false;

        vector<ListNode*> arr;
        while (head != nullptr) {
            // is passed through before --> true
            if (find(arr.begin(), arr.end(), head) != arr.end()) return true;

            arr.push_back(head);
            head = head->next;
        }

        return false;
    }
};