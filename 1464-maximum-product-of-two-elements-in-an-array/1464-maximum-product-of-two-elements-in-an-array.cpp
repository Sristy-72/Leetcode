class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();
        int max1=0;
        int max2=0;

        for(int i=0;i<n;i++){
           if(nums[i]>=max1){
            max2=max1;
            max1=nums[i];
           }
           else if(nums[i]>max2 && nums[i]<max1){
            max2=nums[i];
           }
        }
        return (max1-1)*(max2-1);
    }
};