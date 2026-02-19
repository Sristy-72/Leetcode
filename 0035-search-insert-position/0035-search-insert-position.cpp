class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int n= nums.size();
       int s=0;
       int end= n-1;
       int ans=n;
       while(s<=end){
        int mid= s+(end-s)/2;
        if(nums[mid]==target){
            ans=mid;
            break;
        }
        else if(nums[mid]<target){
             s= mid+1;
           
        }
        else{
            ans= mid;
            end=mid-1;
        }

       }
       return ans; 
    }
};