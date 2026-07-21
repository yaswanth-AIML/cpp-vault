class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len=nums.size(),max1=INT_MIN;
        for(int i=0;i<len;i++){
            int curr=1;
            for(int j=i;j<len;j++){
                curr*=nums[j];
                max1=max(max1,curr);
            }
        }
        return max1;
    }
};
