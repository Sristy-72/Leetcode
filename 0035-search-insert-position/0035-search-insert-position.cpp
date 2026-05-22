class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        if(n==1 && nums[0]<target) return n;
        for(int i=1;i<n;i++){
            if(nums[i]>=target && nums[i-1]<target) return i;
           
            if(nums[n-1]<target) return n;
        }
        return 0;
    }
};