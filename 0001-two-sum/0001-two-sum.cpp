class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>ans;
   int n= nums.size();
  unordered_map<int,int>mp;
   for(int i=0;i<n;i++){
     int j= target-nums[i];
     if(mp.find(j)!=mp.end()){
        return {mp[j],i};
     }
     mp[nums[i]]=i;
   }
   return {};
    }
};