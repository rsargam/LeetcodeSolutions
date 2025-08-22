// Last updated: 22/08/2025, 23:53:47
class Solution {
public:
    double myPow(double x, int n) {
     double ans=1.0;
     if(n==0){
        return 1.0;
     }
     long long num=n;
     
     if(n<0){
        num=-1*num;
            x=double(1.0)/double(x);
        }
     while(num>0){
        if(num%2==0){
            x=x*x;
            num=num/2;
        }
        else{
            ans=ans*x;
            num=num-1;
        }
        

     }
     
        return ans;
    }
};