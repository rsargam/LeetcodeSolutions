// Last updated: 22/08/2025, 23:52:54
class Solution {
public:
    int addDigits(int num) {
        while(num>9){
        int sum=0,rem;
        while(num>0){
          rem=num%10;
          num=num/10;
          sum+=rem;
        }
        num=sum;
        }
        return num;
    }
};