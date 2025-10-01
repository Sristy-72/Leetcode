class Solution {
public:
void allcomb(vector<int>&nums, vector<vector<int>>&ans, vector<int>&ds, vector<int>&freq){
    if(ds.size()==nums.size()){
        ans.push_back(ds);
    }
    for(int i=0;i<nums.size();i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i]=1;
            allcomb(nums, ans, ds, freq);
            freq[i]=0;
            ds.pop_back();
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n= nums.size();
        vector<int>ds;
       vector<int>freq(n);
          allcomb(nums, ans, ds, freq);
        return ans;
    }
};