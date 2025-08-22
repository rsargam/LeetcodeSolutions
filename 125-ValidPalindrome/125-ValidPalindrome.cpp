// Last updated: 22/08/2025, 23:53:25
class Solution {
private:
    bool valid(char ch){
if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') ){
    return 1;
}
return 0;
    }

    char lower(char ch){
        if(ch>='A' && ch<='Z'){
            return ch+ 'a'-'A';
        }
        return ch;
    }
    
    bool checkpalindrome(string a){
        int s=0;
        int e=a.length()-1;
        while(s<e){
            if(a[s]!=a[e]){
                return false;
            }
            else{
                s++;
                e--;
            }
        }
        return true;

    } 

public:
    bool isPalindrome(string s) {
       int i=0;
       string temp="";
       for(int j=0;j<s.length(); j++){
        if(valid(s[j])){
            temp.push_back(s[j]);
        }
       }
       for(int j=0;j<temp.length();j++){
        temp[j]=lower(temp[j]);
       }
       return checkpalindrome(temp);

    } 
};