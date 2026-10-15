class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>seen;
        for(int i=0;i<nums.size();i++)
        {
            seen.insert(nums[i]);
        }
        vector<int>ans;
        for(int i=1;i<=nums.size();i++)
        {
            if(seen.find(i)==seen.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};