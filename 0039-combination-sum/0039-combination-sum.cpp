class Solution {
public:
vector<vector<int>>ans;
void solve( int idx ,vector<int>&candidates, vector<int>&ds, int target){
    if(idx == candidates.size()){
        if(target==0){
          ans.push_back(ds);
        }
         return;
    }
    if(candidates[idx]<=target){
        ds.push_back(candidates[idx]);
        solve(idx, candidates, ds, target-candidates[idx]);
        ds.pop_back();
    }
    solve(idx+1, candidates, ds, target);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<int>ds;
      solve(0, candidates, ds, target);
      return ans;  
    }
};