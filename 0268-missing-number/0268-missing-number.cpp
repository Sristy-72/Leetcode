class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int sum= (n*(n+1)/2);
        //for(int i=0;i<n;i++){
           // int sum1=sum+nums[i];
       // }
       return sum-accumulate(nums.begin(),nums.end(),0);
    }
};