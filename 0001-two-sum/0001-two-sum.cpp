class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        int n= nums.size();
        vector<int>ans;
       for(int i=0;i<n;i++){
        int tofind= target-nums[i];
        if(mp.find(tofind)!=mp.end()) {
             return {mp[tofind], i};
        }
         mp[nums[i]] = i;
       }
       return {};
    }
};