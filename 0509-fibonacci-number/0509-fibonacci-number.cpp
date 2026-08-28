class Solution {
public: 
    int calculatefibo(int n,vector<int>&dp)
    {
        if(n==0)
           return 0;
        if(n==1)
            return 1;
        if(dp[n]!=-1)
        {
            return dp[n];
        }

       int ans= calculatefibo(n-1,dp) + calculatefibo(n-2,dp);
       dp[n]=ans;
       return ans;
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return calculatefibo(n,dp);
        
    }
};