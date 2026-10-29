class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>pos;
        vector<int>ans;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==c)
            {
            pos.push_back(i);
        }
        }
        for(int i=0;i<n;i++)
        {
                    int dis=INT_MAX;

            for(int j=0;j<pos.size();j++)
            {
              dis=min(dis,abs(i-pos[j]));
            }
            ans.push_back(dis);
        }

return ans;
    }
};