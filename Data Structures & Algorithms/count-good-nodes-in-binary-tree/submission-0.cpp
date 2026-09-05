class Solution {
public:
    int f(TreeNode* root, int mx) {
        if(root == nullptr) return 0;

        int ans = 0;

        if(root->val >= mx) {
            ans = 1;
            mx = root->val;
        }

        ans += f(root->left, mx);
        ans += f(root->right, mx);

        return ans;
    }

    int goodNodes(TreeNode* root) {
        return f(root, root->val);
    }
};