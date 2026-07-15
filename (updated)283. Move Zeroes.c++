class Solution {
public:
    void moveZeroes(vector<int>& nums) { 
        int length=nums.size();
        int left=0,right=0;
        for(int i=0;i<length;i++){
            if(nums[right]!=0){
                int temp=nums[left];
                nums[left]=nums[right];
                nums[right]=temp;
                left=left+1;
            }
            right=right+1;
        }
    }
};
