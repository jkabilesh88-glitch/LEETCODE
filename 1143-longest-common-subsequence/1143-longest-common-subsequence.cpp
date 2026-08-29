class Solution {
public:
   int rec(int i, int j, string &text1, string &text2,
               vector<vector<int>>&dp, int n, int m)
   {
       if(i==n || j==m)
           return 0;


       if( dp[i][j]!=-1)
           return dp[i][j];


       int ans=0;
       if( text1[i]== text2[j])
       {
           ans = 1 + rec(i+1,j+1,text1,text2,dp,n,m);
       }
       else
       {
           int op1 = rec(i,j+1,text1, text2, dp,n,m);
           int op2 = rec(i+1,j,text1, text2, dp,n,m);


           ans= max(op1,op2);
       }
       dp[i][j]= ans;
       return ans;
   }
   int longestCommonSubsequence(string text1, string text2)
   {
       int n = text1.size();
       int m = text2.size();


       vector<vector<int>>dp( n, vector<int>(m, -1));


       return rec(0,0, text1, text2, dp,n,m);
   }
};


