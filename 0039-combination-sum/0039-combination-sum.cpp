class Solution {
public:
vector<vector<int>>ans;
void solve(vector<int>&candidates,vector<int>&ds, int i, int target){

    if(i==candidates.size()){
        if(target==0){
         ans.push_back(ds);
        } 
        return;
    }
        if(candidates[i]<=target){
        ds.push_back(candidates[i]);
         solve(candidates, ds, i, target-candidates[i]);
         ds.pop_back();
        }
        solve(candidates, ds, i+1, target);


    
}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        //  vector < vector < int >> ans;
      vector < int > ds;
      solve(candidates, ds, 0,target);
      return ans;
    }
};