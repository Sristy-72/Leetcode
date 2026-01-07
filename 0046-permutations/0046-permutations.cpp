class Solution {
public:
void allComb(vector<int>&nums, vector<vector<int>>&ans, vector<int>&cont,vector<int>&freq){
    if(cont.size()==nums.size()){
        ans.push_back(cont);
    }
    for(int i=0;i<nums.size();i++){
        if(!freq[i]){
            cont.push_back(nums[i]);
            freq[i]=1;
            allComb(nums,ans, cont, freq);
            freq[i]=0;
            cont.pop_back();
        }
    }
} 
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>>ans;
        int n= nums.size();
        vector<int>cont;
       vector<int>freq(n);
          allComb(nums, ans, cont, freq);
        return ans;
    }
};