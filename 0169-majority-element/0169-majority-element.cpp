class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n= nums.size();
       unordered_map<int, int>mp;
      for(auto it:nums){
        mp[it]++;
        if(mp[it]>(n/2)) return it;
      }
      return -1;
    }
};