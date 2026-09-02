class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        int ans=0;
        while(i<j){
            ans = max(ans,((j-i)*min(nums[i],nums[j])));
            if(nums[i]>nums[j]){
                j--;
            }else i++;
        }
        return ans;
    }
};
