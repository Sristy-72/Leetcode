class Solution {
public:
bool solve(vector<vector<int>>&dp,vector<int>&nums,int ind, int target){
    if(ind==0) return nums[0]==target;
    if(target==0) return true;
    if(dp[ind][target]!=-1) return dp[ind][target];
    bool notTaken= solve(dp, nums, ind-1,target);
    bool taken= false;
    if(nums[ind]<=target){
        taken= solve(dp,nums, ind-1, target-nums[ind]);
    }
    return dp[ind][target]= taken|| notTaken;
}
    bool canPartition(vector<int>& nums) {
        int n= nums.size();
         int sum=0;
        for(int i=0;i<n;i++){
            sum= sum+nums[i];
        }
        if(sum%2==1) {
            return false;
        }
        else{
             int target=sum/2;
          vector<vector<int>>dp(n, vector<int>(target+1,-1));
        return solve(dp,nums,n-1,target);
        }
        return false;
    }
};