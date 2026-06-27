class Solution {
public:
    double solve ( double a , long b){
        if(b ==0) return 1;
        if(b<0) return solve(1/a, -b);
        if(b %2==0) return solve(a*a,b/2);
        else return a*pow(a*a, (b-1)/2);
        
    }
    double myPow(double x, int n) {
       return solve(x, (long) n);
        
    }
};