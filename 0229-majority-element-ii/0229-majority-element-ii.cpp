class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans;
        set<int>seen;
        unordered_map<int, int>mp;
        for(auto it:nums){
            mp[it]++;
            if(mp[it]>(n/3) && seen.find(it)==seen.end()){
                 seen.insert(it);
                 ans.push_back(it);
                 
            }
        }
        return ans;
    }
};