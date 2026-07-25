class Solution {
public:
    int maxProduct(int n) {
     int max1 = -1 , max2 = -1;
        while(n != 0){
            int rem = n % 10;
            if(max1 <= rem){
                max2 = max1;
                max1 = rem;
            }
            else if(max2 < rem){
                max2 = rem;
            }
            n /= 10;
        }
        return max1 * max2;   
    }
};