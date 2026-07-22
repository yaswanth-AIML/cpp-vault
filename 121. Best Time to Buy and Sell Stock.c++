class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len=prices.size();
        int max1=0;
        int min1=INT_MAX;
        for(int i=0;i<len;i++){
            if(prices[i]<min1)
            min1=prices[i];
            max1=max(max1,prices[i]-min1);
        }
        return max1;
    }
};
