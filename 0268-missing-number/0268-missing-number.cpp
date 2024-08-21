class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
    //     int sum= (n*(n+1)/2);
    //     //for(int i=0;i<n;i++){
    //        // int sum1=sum+nums[i];
    //    // }
    //    return sum-accumulate(nums.begin(),nums.end(),0);
    //    // accumulate is used to iterate over a sequence of elements
    //    // accumulate(starting range, ending range,intial value)

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