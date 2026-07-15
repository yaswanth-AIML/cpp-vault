class Solution {
public:
    void moveZeroes(vector<int>& nums) { 
        int length=nums.size();
        for (int j=0;j<length-1;j++){
        for(int i=0;i<length-1;i++){
            if (nums[i]==0){
                int temp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
            }
    }}}
};
