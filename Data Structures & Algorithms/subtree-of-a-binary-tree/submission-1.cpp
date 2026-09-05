

class Solution {
public:
    bool f(TreeNode* root, TreeNode* t){
        if(root==nullptr && t==nullptr) return 1;
        if(root==nullptr || t==nullptr )  return 0;
        if(root->val!=t->val){
            return 0;
        }
        return f(root->left,t->left) && f(root->right,t->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==nullptr) return 0;
        if(f(root,subRoot)) return 1;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};
