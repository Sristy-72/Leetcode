class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        unordered_map<int, int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            int first= nums[i];
            int second= target-first;
            if(mp.find(second)!= mp.end()){ // it only takes O(n) time complexity
                ans.push_back(i);
                ans.push_back(mp[second]);
                break;
            }
            mp[first]=i;
        }
        return ans;
    }
};