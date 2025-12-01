class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int s=0;
        int end= n-1;
        int mid= (s+end)/2;
        while(s<=end){
            if(nums[mid]==target) return mid;
            else if(target>nums[mid]) s++;
            else end--;
            mid=(s+end)/2;
        
        }
        return -1;
    }
};