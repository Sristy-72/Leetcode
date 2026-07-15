class Solution {
public:
  
    int gcdOfOddEvenSums(int n) {
        int oddsum=n*n;
        int evensum= (n+1)*n;
       int gcd=1;
       int mini= min(oddsum,evensum);
        for(int i=1;i<mini;i++){
           if(evensum%i==0 && oddsum%i==0){
            gcd=i;
           }
        }
        return gcd;
    }
};