

class Solution {
public:
    vector<int>nums;
    void inorder(TreeNode* root){
        if(root==nullptr) return;
        inorder(root->left);
        nums.push_back(root->val);
        inorder(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        return nums[k-1];
    }
};
