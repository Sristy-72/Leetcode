class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int, int>mp;
        int ans;
        int unique_length= n/2;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==unique_length){
                ans= nums[i];
                 break;
            }
           
        }
        return ans;
    }
};