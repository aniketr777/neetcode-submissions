class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        vector<int>t(n,0);
        t[0]=nums[0];
        for(int i=1;i<n;i++){
            t[i]+=t[i-1]+nums[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            
            if(t[i]-nums[i] == t[n-1] - t[i]){
                ans=i;
                break;
            }
        }
        return ans;
    }
};