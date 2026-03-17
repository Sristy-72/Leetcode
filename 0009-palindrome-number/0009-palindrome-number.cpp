class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        long long temp=x;
        if(x<0) return false;
        while(x>0){
            int t= x%10;
            rev= rev*10 + t;
            x=x/10;
        }
        
        if(temp==rev) return true;
        return false;
    }
};