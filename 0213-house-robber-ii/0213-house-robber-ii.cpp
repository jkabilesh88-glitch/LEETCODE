class Solution {
public:
    int calculate(int i,vector<int>&nums,int n,vector<int>&dp)
    {
        if(i >= n)
            return 0;
        
        if(dp[i] != -1)
            return dp[i];
        
        int rob = nums[i] + calculate(i + 2,nums,n,dp);
        int dontrob = calculate(i + 1,nums,n,dp);

        int ans = max(rob,dontrob);
        dp[i] = ans;

        return dp[i];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return nums[0];

        vector<int>dp1(n-1,-1);
        vector<int>dp2(n,-1);
        
        int a1 = calculate(0,nums,n-1,dp1);
        int a2 = calculate(1,nums,n,dp2);
        return max(a1,a2);        
    }
};