class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        int cnt=0;
   // BRUTE FORCE APPROACH
    // for(int i=0;i<n;i++){
    //      int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum= sum+arr[j];
    //         if(sum==k) {
    //             cnt++;
    //         }
           
    //     }
    // }
    // return cnt;
  int sum=0;
unordered_map<int, int> mp;
mp[0]=1;
for(int i=0;i<n;i++){
    sum= sum + arr[i];
    // if(sum==k){
    //     cnt++;
    // }
    if(mp.find(sum-k)!=mp.end()){
        cnt= cnt+ mp[sum-k];
    }
        mp[sum]++;
    
   
}
return cnt;
    }
};