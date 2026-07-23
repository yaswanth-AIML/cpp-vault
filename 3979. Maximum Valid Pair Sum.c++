class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int max1 = INT_MIN;
        int len = nums.size();
        int best=INT_MIN;
        for (int i=k;i<len;i++) {
            best=max(best,nums[i-k]);
            max1=max(max1,best+nums[i]);
        }
        return max1;
    }
};
