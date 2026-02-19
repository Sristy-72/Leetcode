class Solution {
public:
    int search(vector<int>& nums, int target) {
      int n= nums.size();
      int s=0;
      int end=n-1;
      int mid= s+ (end-s)/2;
      while(s<=end){
        if(nums[mid]==target){
            return  mid;
        }
        else if(nums[mid]>target){
            end=mid-1;
        }
        else{
            s= mid+1;
        }
        mid=(s+end)/2;
      }  
      return -1;
    }
};