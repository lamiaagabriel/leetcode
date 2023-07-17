class Solution {
public:
    void searchPreOrder(TreeNode* &root, TreeNode* &head, int val) {
        if (root == nullptr || head != nullptr) return;
        if(root->val == val) {
            head = root;
            return;
        }

        searchPreOrder(root->left, head, val);
        searchPreOrder(root->right, head, val);
    }


    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* head = nullptr;
        searchPreOrder(root, head, val);
        return head;
    }
};