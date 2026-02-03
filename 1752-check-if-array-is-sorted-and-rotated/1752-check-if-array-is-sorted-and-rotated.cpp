class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int p = -1;

        for(int i=0;i<n-1;i++){
            if(nums[i+1] < nums[i]){
                p = i;
                break;
            }
        }

        if(p == -1) return true; 

          for(int i = p+1; i < n-1; i++) {
            if(nums[i+1] < nums[i]) return false;
        }

        return nums[n-1] <= nums[0];
    }
};