class Solution {
public:

    int h(TreeNode* root) {
        if (root == nullptr) return 0;

        return 1 + max(h(root->left), h(root->right));
    }

    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;

        bool l = isBalanced(root->left);
        bool r = isBalanced(root->right);

        bool current = abs(h(root->left) - h(root->right)) <= 1;

        return l && r && current;
    }
};