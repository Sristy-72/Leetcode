class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x){
         int t= x%10;
         rev= rev*10 + t;
         x= x/10;
        }
        return rev;
    }
};