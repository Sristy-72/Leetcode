class Solution {
public:
bool isPrime(int n){
    if(n<=1) return false;
  
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    
    }
    return true;
}
    int countPrimes(int n) {
        
        // int cnt=0;
        //  if(n<=1) return 0;
        // for(int i=2;i<n;i++){
        //     if(isPrime(i)) cnt++;
        // }
        //  return cnt;

        if(n<=1) return 0;
        vector<int>prime(n,0);
        for(int i=2;i*i<n;i++){
           if(prime[i]==0){
           
            for(int j=i*i;j<n;j+=i){
                prime[j]=1;
            }
           }
            
        }
        int cnt=0;
        for(int i=2;i<n;i++){
            if(prime[i]==0)cnt++;
        }
        return cnt;
    }
};