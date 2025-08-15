class Solution {
public:
    bool isPowerOfFour(int n) {
        long long prod=1;
        if(n==1) return true;
    while(prod<n){
        prod=prod*4;
        if(prod==n) return true;
    }  
    return false;  
    }
};