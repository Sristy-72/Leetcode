class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
      int sum=0;
    int sum2=0;
    int miss_number;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    for(int i=0;i<n;i++){
        sum2=sum2+nums[i];
    }
    return sum-sum2;   
    }
};