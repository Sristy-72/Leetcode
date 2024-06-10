class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int maxsofar = nums[0];
        int currmax = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currmax = max(nums[i], currmax + nums[i]);
            maxsofar = max(maxsofar, currmax);
        }

        return maxsofar;   
    }
};