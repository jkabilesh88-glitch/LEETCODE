class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int water=0;
        while(left<right)
        {
            int h1= min(height[left],height[right]);
            int w1=right-left;
        int area=w1*h1;
        if(area>water)
        {
            water=area;
        }
            if(height[left]<height[right])
            {
                left++;
            }
            else{
                  right--;          }

        }
return water;
        
    }
};