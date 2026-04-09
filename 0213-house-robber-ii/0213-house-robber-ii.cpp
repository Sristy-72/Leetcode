class Solution {
public:
int solve(vector<int>&nums,  int end, vector<int>&dp){
    if(end<0) return 0;
    if(end==0) return nums[0];
    if(end==1) return max(nums[0],nums[1]);
    
    if(dp[end]!=-1) return dp[end];
    // if(dp2[start]!=-1) return dp[start];
    
   int pick= nums[end]+solve(nums, end-2,dp);
   int notPick=solve(nums,end-1, dp);
    return dp[end]=max(pick, notPick);
}
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return nums[0];
        vector<int>temp1(nums.begin()+1, nums.end());
        vector<int>temp2(nums.begin(),nums.end()-1);
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        int option1= solve(temp1,temp1.size()-1,dp1 );
        int option2= solve(temp2,temp2.size()-1, dp2);
        return max(option1, option2);
    }
};