class Solution {
public:
    void inOrder(TreeNode* &root, TreeNode* &cursor) {
        if (root == nullptr) return;
        inOrder(root->left, cursor);

        cursor->right = new TreeNode(root->val);
        cursor = cursor->right;

        inOrder(root->right, cursor);
    }

    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* cursor = new TreeNode();
        TreeNode* head = cursor;
        inOrder(root, cursor);
        return head->right;
    }
};