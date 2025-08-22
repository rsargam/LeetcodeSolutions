// Last updated: 22/08/2025, 23:54:12

class Solution {
public:
    int reverse(int x) {
        int rem;
        signed int long rev=0;
        while(x!=0)
        {
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
         if(rev<(-pow(2,31))||rev>(pow(2,31)-1) )
         return 0;
         else
        return rev;

        
    }
};