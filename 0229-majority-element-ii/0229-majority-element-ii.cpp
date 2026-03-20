class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n= nums.size();
        vector<int>ans;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second>(n/3)) {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};