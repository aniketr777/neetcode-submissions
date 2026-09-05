class Solution {
public:

    int h(TreeNode* root) {
        if (root == nullptr)
            return 0;

        int left = h(root->left);
        if (left == -1)
            return -1;

        int right = h(root->right);
        if (right == -1)
            return -1;

        if (abs(left - right) > 1)
            return -1;

        return 1 + max(left, right);
    }

    bool isBalanced(TreeNode* root) {
        return h(root) != -1;
    }
};