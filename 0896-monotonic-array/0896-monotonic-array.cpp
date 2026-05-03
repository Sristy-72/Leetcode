class Solution {
public:
bool inc(vector<int>&nums){
    int n= nums.size();
     for(int i=0;i<n-1;i++){
            if(nums[i+1]<nums[i]) return false;
           
        }
        return true;
}
bool dec(vector<int>&nums){
    int n= nums.size();
    for(int i=0;i<n-1;i++){
        if(nums[i+1]>nums[i]) return false;
        
    }
    return true;
}
    bool isMonotonic(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return true;
       if(dec(nums)|| inc(nums)) return true;
       else return false;

    }
};