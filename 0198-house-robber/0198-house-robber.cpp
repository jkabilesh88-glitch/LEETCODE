class Solution {
public:

    int houserober(int i,vector<int>&nums,int n,vector<int>&dp)
    {
        if(i>=n)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }

        int rob=nums[i]+houserober(i+2,nums,n,dp);
        int dontrob=houserober(i+1,nums,n,dp);
        int ans=max(rob,dontrob);
        dp[i]=ans;
        return ans;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return houserober(0,nums,n,dp);
    }
};