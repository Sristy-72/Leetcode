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
 unordered_map<int, int>mp;
 int sum=0;
 mp[0]=0;
 for(int i=0;i<n;i++){
    sum= sum+arr[i];
    if(sum==k){
        cnt=cnt+1;
    }
    if(mp.find(sum-k)!=mp.end()){
        cnt= cnt+ mp[sum-k];
    }
    mp[sum]++;

 }
 return cnt;
    }
};