class Solution {
public:
    int findMin(vector<int>& nums) {
         int start=0, end=nums.size()-1,
         ans=nums[0];
         while(start<=end){
            int mid= start + (end-start)/2;
            //left side sorted array
            if(nums[mid]>=nums[0])
                start=mid+1;
            // right side sorted array
            else{
            ans=nums[mid];
            end= mid-1;
         }
         }
         return ans;
    }
};