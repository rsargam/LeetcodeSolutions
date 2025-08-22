// Last updated: 22/08/2025, 23:54:11
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        else{
          long long reverse=0,temp=x;
          while (temp!=0){
            reverse=reverse*10 +temp%10;
            temp=temp/10;
          }
          return (reverse==x);
        }

    }
};