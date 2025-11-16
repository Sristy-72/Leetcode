class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int n= nums.size();
       int max1=INT_MIN, max2=INT_MIN;
        int min1=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]>max1){
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>max2){
                max2=nums[i];
            }
            min1=min(min1,nums[i]);
        }
        return max1+max2-min1;
    }
};