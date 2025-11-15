class Solution {
public:
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return nums[0];
       int prev2=nums[0];
       int prev1=max(nums[0], nums[1]);
       int curr= INT_MIN;
       for(int i=1;i<n;i++){
        int take=nums[i];
        if(i>1){
            take= take+prev2;
            int not_take= prev1;
             curr= max(take, not_take);
            prev2=prev1;
            prev1= curr;
        }
       }
     return prev1;
    }
};