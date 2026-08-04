class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       vector<int> ans;
        sort(nums.begin(),nums.end());
     int n=nums.size();
     int target=nums[0];
     for(int i=0;i<n;i++)
     {
         while(nums[i]>target)
        {
            ans.push_back(target);
            target++;
        }
        target=nums[i]+1;
     }   
     return ans;
    }
};