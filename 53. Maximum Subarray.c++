class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int length=nums.size();
        int max1=INT_MIN;
        int curr=0;
        for(int i=0;i<length;i++){
            curr+=nums[i];
            max1=max(curr,max1);
            if(curr<0)
            curr=0;
        }
        return max1;
    }
};
