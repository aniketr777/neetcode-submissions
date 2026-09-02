class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        // int i=0;
        set<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int sum = nums[i];
            int j=i+1,k=n-1;
            while(j<k){
                if(nums[j]+nums[k]+sum==0){
                    ans.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }else if(nums[j]+nums[k]+sum>0) {
                    k--;
                }else{
                    j++;
                }
            }
        }
        vector<vector<int>>t;
        for(auto ele : ans){
            t.push_back(ele);
        }
        return t;
    }
};
