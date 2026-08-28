class Solution {
public:
    int climbstairs1(int n,vector<int>&dp)
    {
        if(n==1)
           return 1;
        if(n==2)
          return 2;
        if(dp[n]!=-1)
        {
            return dp[n];
        }

    int ans=climbstairs1(n-1,dp)+climbstairs1(n-2,dp);
    dp[n]=ans;
    return ans;
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return climbstairs1(n,dp);
    }
};