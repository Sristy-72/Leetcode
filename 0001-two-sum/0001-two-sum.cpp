class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n= nums.size();
        for(int i=0;i<n;i++){
            int find= target-nums[i];
             if(mp.find(find)!=mp.end()){
                return {i,mp[find]};
             }
             mp[nums[i]]=i;
        }
        return {};
    }
};