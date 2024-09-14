class Solution {
public:
    int longestSubarray(vector<int>& arr) {
        int cnt=0;
        int ans=0;
        int n=arr.size();
     int largest=*max_element(arr.begin(),arr.end());
      for(int i=0;i<n;i++){
        if(arr[i]==largest){
        cnt++;
       }
       else{
       cnt=0;
      }
      ans=max(ans,cnt);
      }
      return ans;
    }
};