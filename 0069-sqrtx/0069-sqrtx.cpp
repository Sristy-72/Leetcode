class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;
        int st=0;
        int end=x;
        int ans;
        while(st<=end){
            int mid= st + (end-st)/2;
            if(mid==x/mid) return mid;
            else if(mid<x/mid) {
                st=mid+1;
                ans= mid;
            }
            else {
                end= mid-1;
            }
        
        }
        return ans;
    }
};