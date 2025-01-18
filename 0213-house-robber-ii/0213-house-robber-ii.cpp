class Solution {
public:
long long int solve(vector<int>&nums){
    // if(ind==0) return nums[ind];
    // if(ind<0) return 0;
   long long int prev2= 0;
    long long int prev=nums[0];
    for(int i=1;i<nums.size();i++){
      long long  int pick=nums[i];
      if(i>1)
      pick+=prev2;
     long long int nonpick=0+ prev;
      long long  int curr= max(pick,nonpick);
       prev2=prev;
       prev=curr;
    }
    return prev;
}
int robhouse(vector<int>&nums, int n){
    vector<int>arr1;
    vector<int>arr2;
    if(n==1) return nums[0];
for(int i=0;i<n;i++){
    if(i!=0) arr1.push_back(nums[i]);
    if(i!=n-1) arr2.push_back(nums[i]);
    
}
 long long int ans1=solve(arr1);
   long long int ans2=solve(arr2);
    return max(ans1,ans2);
}
    int rob(vector<int>& nums) {
       int n=nums.size();
       return robhouse(nums,n); 
    }
};