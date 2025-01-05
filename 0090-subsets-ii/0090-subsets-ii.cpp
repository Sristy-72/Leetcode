class Solution {
public:
void solve(vector<int>&nums, int ind, vector<int>&ds, vector<vector<int>>&ans){
    ans.push_back(ds);
    for(int i=ind; i<nums.size();i++){
        if(i!=ind && nums[i]==nums[i-1]) continue;
        ds.push_back(nums[i]);
        solve(nums,i+1,ds, ans);
        ds.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // int n = nums.size();
         vector<vector<int>>ans;
         vector<int>ds;
         sort(nums.begin(), nums.end());
         solve(nums, 0, ds, ans);
         return ans;
    }
};