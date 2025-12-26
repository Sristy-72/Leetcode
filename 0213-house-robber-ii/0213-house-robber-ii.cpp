class Solution {
public:
int solve(vector<int>&nums, int ind, vector<int>&dp){
    if(ind==0) return nums[0];
   if(ind<0) return 0;
    if(dp[ind]!=-1) return dp[ind];
     int n= nums.size();
    
     
    int pick= nums[ind]+ solve(nums, ind-2,dp);
    int not_pick= solve(nums, ind-1,dp);
    return dp[ind]=max(pick, not_pick);
}
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return nums[0];
        vector<int>temp1, temp2;
        for(int i=1;i<n;i++){
         temp1.push_back(nums[i]);
        }
        for(int i=0;i<n-1;i++){
            temp2.push_back(nums[i]);
        }
        vector<int>dp1(temp1.size(),-1);
        vector<int>dp2(temp2.size(),-1);
        return max(solve(temp1,temp1.size()-1,dp1), solve(temp2, temp2.size()-1,dp2));
    }
};