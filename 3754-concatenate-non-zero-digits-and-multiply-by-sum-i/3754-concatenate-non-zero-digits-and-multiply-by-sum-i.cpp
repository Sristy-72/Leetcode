class Solution {
public:
    long long sumAndMultiply(int n) {
         long long new_n= 0;
         long long temp = n;
         long long  sum=0;
         while(temp>0){
            int last_d= temp%10;
            if(last_d!=0){
            new_n= new_n*10 + last_d;
            sum= sum+ last_d;
            }
            temp= temp/10;
         }
         string s= to_string(new_n);

         reverse(s.begin(), s.end());
         long long ans= stoll(s);
         return ans*sum;

    }
};