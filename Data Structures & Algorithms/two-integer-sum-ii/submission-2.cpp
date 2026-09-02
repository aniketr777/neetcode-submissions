class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        int  n=nums.size();
        int i=0,ans=0;
        int j=n-1;
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum>k){
                j--;
            }else if(sum<k){
                i++;
            }
            else return {i+1,j+1};
        }
        return {};
    }
};
