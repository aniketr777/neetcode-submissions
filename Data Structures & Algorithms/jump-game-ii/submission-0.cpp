class Solution {
public:
    int f(vector<int>& nums, int i, vector<int>& dp) {
        if (i >= nums.size() - 1)
            return 0;

        if (nums[i] == 0)
            return 1e9;

        if (dp[i] != -1)
            return dp[i];
        int take=1e9;
        for (int j = 1; j <= nums[i]; j++) {
            int res = f(nums, i + j, dp);

            if (res < 1e9)
                take = min(take, 1 + res);
        }

        return dp[i]=take;
    }

    int jump(vector<int>& nums) {
        vector<int>dp(1005,-1);
        return f(nums,0,dp);
    }
};
