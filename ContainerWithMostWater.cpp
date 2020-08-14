#include<algorithm>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0;
        int high = height.size()-1;
        
        cout<<low<<" "<< high;
        int area=0;
        
        while(low<high){
            int l = std::min(height[low],height[high]);
            int w = high - low;
            area = std::max(area,l*w);
            if (height[low]>height[high])
            {
                high--;
            }
            else
            {
                low++;
            }
            
            
        }
        
    return area;
    }
};
