class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& nums) {
        int n= nums.size();
        unordered_map<string, vector<string>>mp;
        vector<vector<string>>ans;
        for(int i=0;i<n;i++){
            string temp= nums[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(nums[i]);
        }
        for(auto it:mp){
           ans.push_back(it.second);
        }
     return ans;   
    }
};