class Solution {
public:
vector<vector<int>>result;
void solve( vector<int>&nums,vector<int>ans, int n, int i ){
    if(i>=n ){
    result.push_back(ans);
    return;
    } 
    ans.push_back(nums[i]);
    solve(nums, ans, n, i+1);
    ans.pop_back();
    solve(nums, ans, n, i+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans;
     solve(nums, ans, n, 0);
     return result;
    }
};