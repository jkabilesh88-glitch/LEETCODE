class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int ans=0;
                    int mx=0;

        map<pair<int,int>,int>mp;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                ans++;
            }
            else{
                int a=nums[i];
                int b=nums[i+1];
                if(a>b)
                {
                    swap(a,b);
                }                    mp[{a,b}]++;

                
            }
            
        }
        for(auto p:mp)
                {
                    mx=max(mx,p.second);
                }
                    return ans+mx;

    }
};