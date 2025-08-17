class Solution {
public:
    int hammingWeight(int n) {
     int cnt=0;
    //  if(n==1) cnt++;
     while(n>=1){
        if(n%2==1) cnt++;
        n=n/2;
     } 
     return cnt;  
    }
};