class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();
        int st=1;
        int end= n-2;
       
        if(n==1) return 0;
        int mid= st+(end-st)/2;
         if(nums[0]>nums[1]) return 0;
         if(nums[n-1]>nums[n-2]) return n-1;
        while(st<=end){
             
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
        }
        return -1;
    }
};