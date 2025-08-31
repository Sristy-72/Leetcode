class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();
        int st=0;
        int end= n-1;
        int mid= (st+end)/2;
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
          return mid;
        } 
        else if(nums[mid-1]>nums[mid]){
          end= mid-1;
        }
        else{
            st= mid+1;
        }
        mid= (st+end)/2;
        return mid;
    }
};