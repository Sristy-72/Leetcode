class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int n=nums.size();
        int end=n-1;
        while(s<=end){
           int mid=s+(end-s)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]>target){
                end=mid-1;
            }
            else 
            s=mid+1;
        }
        return -1;
    }
};