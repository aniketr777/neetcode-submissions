
class Solution {
public:
    vector<vector<int>>ans;
    void f(TreeNode* root){
        if(root==nullptr) return;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
 vector<int> t;

            int n = q.size();

            while(n--) {
                TreeNode* ele = q.front();
                q.pop();

                t.push_back(ele->val);

                if(ele->left)
                    q.push(ele->left);

                if(ele->right)
                    q.push(ele->right);
            }
            ans.push_back(t);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        f(root);
        return ans;
    }
};
