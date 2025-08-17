class Solution {
public:
    bool isPowerOfTwo(int n) {
    //    int cnt=0;
    //    while(n>=1){
    //     if(n%2==1) cnt++;
    //     n=n/2;
    //    } 
    //    return cnt==1;
    if(n<=0) return false;
    if((n&(n-1))==0) return true;
    else return false;
    }
};