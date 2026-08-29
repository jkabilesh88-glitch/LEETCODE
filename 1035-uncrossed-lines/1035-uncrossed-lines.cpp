class Solution {
private:
    int Uncrossline(int i, int j, int m, int n, vector<int>& nums1,
                    vector<int>& nums2, vector<vector<int>>& dp) {
        if (i == m || j == n)
            return 0;
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        int lines;
        if (nums1[i] == nums2[j]) {
            lines = 1 + Uncrossline(i + 1, j + 1, m, n, nums1, nums2, dp);
        } else {
            int l1 = Uncrossline(i + 1, j, m, n, nums1, nums2, dp);
            int l2 = Uncrossline(i, j + 1, m, n, nums1, nums2, dp);
            lines = max(l1, l2);
        }
        dp[i][j] = lines;
        return dp[i][j];
    }

public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return Uncrossline(0, 0, m, n, nums1, nums2, dp);
    }
};