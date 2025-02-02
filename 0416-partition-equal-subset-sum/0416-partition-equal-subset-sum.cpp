class Solution {
public:
// bool solve(vector<int>&nums,int target,int ind, vector<vector<int>>&dp){
//    if(target ==0) return true;
//    if(ind==0) return nums[0]==target;
//    if(dp[ind][target]!=-1) return dp[ind][target];
//    bool notTaken= solve(nums, target, ind-1, dp);
//    bool taken=false;
//    if(nums[ind]<=target){
//     taken= solve(nums,target-nums[ind],ind-1,dp);
//    }
//    return dp[ind][target] = taken|| notTaken;
// }

bool canPartition(vector<int>& nums) {
    int sum = 0;
    int n = nums.size();   
    for(int i = 0; i < n; i++) {
        sum += nums[i];
    }   
    if(sum % 2 == 1) return false;   
    int target = sum / 2;
    vector<vector<bool>> dp(n, vector<bool>(target + 1, false));
    for(int i = 0; i < n; i++) {
        dp[i][0] = true;
    }
    if(nums[0] <= target) {
        dp[0][nums[0]] = true;
    }

    for(int ind = 1; ind < n; ind++) { 
        for(int j = 1; j <= target; j++) { 
            bool notTaken = dp[ind - 1][j];
            bool taken = false;

            if(nums[ind] <= j) {
                taken = dp[ind - 1][j - nums[ind]];
            }

            dp[ind][j] = taken || notTaken;
        }
    }

    return dp[n - 1][target];
}

};