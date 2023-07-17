class Solution {
public:
    void searchInOrder(TreeNode* &root, TreeNode* &head, int val) {
        if (root == nullptr || head != nullptr) return;
        if(root->val == val) {
            head = root;
            return;
        }

        searchInOrder(root->left, head, val);
        searchInOrder(root->right, head, val);
    }



    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* head = nullptr;
        searchInOrder(root, head, val);
        return head;
    }
};