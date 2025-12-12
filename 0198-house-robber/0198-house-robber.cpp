class Solution {
public:
int solve(vector<int>&nums, int ind, vector<int>&dp){
    if(ind==0) return nums[0];
    if(ind<0) return 0;
    if(dp[ind]!=-1) return dp[ind];

     int adj1= nums[ind]+ solve(nums,ind-2,dp);
     int adj2= 0+ solve(nums, ind-1,dp);
     return dp[ind]=max(adj1, adj2);
}
    int rob(vector<int>& nums) {
        int n= nums.size();
        vector<int>dp(n,-1);
        // return solve(nums, n-1, dp);
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            int adj1= nums[i];
            int adj2= nums[0];
            if(i>1){
                adj1= adj1+dp[i-2];
                adj2= dp[i-1];
            }
            dp[i]= max(adj1, adj2);
        }
        return dp[n-1];
    }
};