class Solution {
public:
    bool isPalindrome(string s) {
     int n= s.size();
       int start=0;
       int end= n;
       if(s==" ") return true;
       while(start<end){
        if(!isalnum(s[start])){
            start++;
        }
        else if(!isalnum(s[end])){
            end--;
        }
        else if(tolower(s[start])!=tolower(s[end])){
        return false;
        }
        else{
            start++;
            end--;
        }
       }
       return true;
    }
};