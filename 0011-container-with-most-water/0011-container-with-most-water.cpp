class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxarea =INT_MIN;
        int l=0; int r=n-1;
        while(l<r){
            int width = r-l;
            int area = width * min(height[l],height[r]);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
            
            if(area>maxarea){
                maxarea = area;
            }
        }
        return maxarea;
        
    }
};