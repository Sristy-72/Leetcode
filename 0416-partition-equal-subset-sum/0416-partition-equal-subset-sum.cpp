class Solution {
public:
bool solve(vector<int>&nums,int target,int ind, vector<vector<int>>&dp){
   if(target ==0) return true;
   if(ind==0) return nums[0]==target;
   if(dp[ind][target]!=-1) return dp[ind][target];
   bool notTaken= solve(nums, target, ind-1, dp);
   bool taken=false;
   if(nums[ind]<=target){
    taken= solve(nums,target-nums[ind],ind-1,dp);
   }
   return dp[ind][target] = taken|| notTaken;
}

    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n= nums.size();
        for(int i=0;i<n;i++){
            sum+= nums[i];
        }
        if(sum%2==1) return false;
        else {
        int target= sum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        
        return solve(nums,target,n-1,dp);
        }
    }
};