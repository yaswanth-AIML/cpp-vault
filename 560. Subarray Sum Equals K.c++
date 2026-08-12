class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int len=nums.size();
        for(int i=0;i<len;i++){
            int sum=0;
            for(int j=i;j<len;j++){
                sum+=nums[j];
                if(sum==k)
                count+=1;
            }
        }
        return count;   
    }
};
