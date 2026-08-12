class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int total=0;
        vector<int> l(nums.size());
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
            l[i]=total;
        }
        return l;
    }
};
