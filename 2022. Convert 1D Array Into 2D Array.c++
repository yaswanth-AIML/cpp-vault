class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(original.size()!=m*n)
        return {};
        vector<vector<int>> s(m,vector<int>(n,0));
        int c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                s[i][j]=original[c];
                c+=1;
            }
        } 
        return s;
    }
};
