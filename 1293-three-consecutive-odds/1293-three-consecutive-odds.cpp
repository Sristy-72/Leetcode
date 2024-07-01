class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
     // approach 1
     int cnt=0;
     int n=arr.size();
     for(int i=0;i<n;i++){
      if(arr[i]%2==1){
        cnt++;
      }
      else{
      cnt=0;// reset
      }
      if(cnt==3)
return true;
     }
        return false;
    }
};