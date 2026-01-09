class Solution {
public:
    int maxSubArray(vector<int>& nums) {
   int curr = nums[0];
    int maxi = nums[0];

    for(int i = 1; i < nums.size(); i++){
        curr = max(nums[i], curr + nums[i]);// take or not-take  ----> we will take if adding that number increases the value and we will not take if adding that valu decreases that value
        maxi = max(maxi, curr); // checking which subarray sum is maximum
    }
    return maxi;
    }
};