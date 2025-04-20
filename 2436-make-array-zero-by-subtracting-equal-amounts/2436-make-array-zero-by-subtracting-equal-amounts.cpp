class Solution {
public:
    int mini(vector<int>& nums) {
        int n = nums.size();
        int minval = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (nums[i] < minval && nums[i] != 0) {
                minval = nums[i];
            }
        }
        return minval;
    }
    int minimumOperations(vector<int>& nums) {
       int n = nums.size();
         int operations = 0;
       while (true) {
            int minimum = mini(nums);
            if (minimum == INT_MAX) break;
            for (int i = 0; i < n; i++) {
                if (nums[i] != 0) {
                    nums[i] = nums[i] - minimum;
                }
            }
            operations++;
        }
        return operations;
    }
};
   