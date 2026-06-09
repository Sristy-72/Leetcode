class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int first= nums[i];
            int second= target- first;
            if(mp.find(second)!= mp.end()){
                return {i,mp[second]};

            }
           mp[first]=i;
        }
        return {};
    }
};