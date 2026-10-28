class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cookieindex=0;
        int contentchildren=0;
        while(cookieindex<s.size() && contentchildren<g.size())
        {   
             if(s[cookieindex]>=g[contentchildren])
        {
            contentchildren++;

        }
                    cookieindex++;

        }
        return contentchildren;

    }
};