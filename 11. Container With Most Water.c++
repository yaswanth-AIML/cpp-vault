class Solution {
public:
    int maxArea(vector<int>& height) {
        int max1=0,left=0,right=height.size()-1;
        while (left<right){
            int area=(right-left)*(min(height[right],height[left]));
            max1=max(max1,area);
            if(height[right]>height[left])
                left+=1;
            else
                right-=1;
        }
        return max1;
    }
};
