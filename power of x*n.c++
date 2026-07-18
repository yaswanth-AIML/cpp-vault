class Solution {
public:
    double myPow(double x, int n) {
        bool neg=false;
        long long n1=n;
        if(n1==0){
            return 1;
        }
        else{
            if(n1<0){
                neg=true;
                n1=-n1;}
        double sum=1;
        for(long long i=1;i<=n1;i++){
            sum=sum*x;
        }
        if(neg)
        return 1/sum;
        else
        return sum;
        }
    }
};
