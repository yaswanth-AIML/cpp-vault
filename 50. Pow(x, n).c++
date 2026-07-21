class Solution {
public:
    double myPow(double x,int n) {
        long long n1=n;
        if(n1==0) return 1;
        if(n1<0){
            x=1/x;
            n1=-n1;
        }
        double sum=1;
        while(n1>0){
            if(n1%2==1) sum=sum*x;
            x=x*x;
            n1=n1/2;
        }
        return sum;
    }
};
