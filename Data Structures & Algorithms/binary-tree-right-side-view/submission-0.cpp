

class Solution {
public:
    vector<int>ans;
    map<int,int>mp;
    void f(int lv,TreeNode* root){
        if(root==nullptr) return ;
        f(lv+1,root->left);
        // mp[lv]=root->val;
        f(lv+1,root->right);
        mp[lv]=root->val;
    }
    vector<int> rightSideView(TreeNode* root) {
        f(0,root);
        for(auto ele : mp){
            ans.push_back(ele.second);
        }
        return ans;
    }
};
