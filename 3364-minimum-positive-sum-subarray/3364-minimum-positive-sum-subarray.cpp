
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;

        for(int len = l; len <= r; len++)
        {
            for(int j = 0; j + len <= n; j++)
            {
                int sum = 0;

                for(int k = j; k < j + len; k++)
                {
                    sum += nums[k];
                }

                if(sum > 0)
                {
                    ans = min(sum, ans);
                }
            }
        }

        if(ans == INT_MAX)
        {
            return -1;
        }

        return ans;
    }
};
