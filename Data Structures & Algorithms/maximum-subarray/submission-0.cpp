class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        int prev=0;
        for(int i=0;i<n;i++){
            int curr = max(prev+nums[i],nums[i]);
            ans=max(curr,ans);
            prev=curr;
        }
        return ans;
    }
};