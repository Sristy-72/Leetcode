class Solution {
public:
    int minDifference(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int MAX_MOVE = 3; //changeable condition
        if (nums.size() <= MAX_MOVE + 1)
            return 0;
        int n = nums.size();
        int ans = INT_MAX;
        for (int i = 0, j = n-1-MAX_MOVE; i <= MAX_MOVE; ++i, ++j)
            ans = min(ans, nums[j] - nums[i]);
        return ans;
        // int n=nums.size();
        // if(n<=4){
        //     return 0;
        // }
        // //1st
        // int res=nums[n-1]-nums[3];
        // //2nd
        // res=min(res,nums[n-4]-nums[0]);
        // //3rd
        // res=min(res,nums[n-2]-nums[2]);
        // //4th
        // res=min(res,nums[n-3]-nums[1]);
        // return res;  
    }
};