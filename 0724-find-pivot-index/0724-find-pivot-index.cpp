class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        int total=0;
        for(int a:nums){
            total+=a;
        }
        int left=0;
        for(int i=0;i<n;i++){
            int right= total-left-nums[i];
            if(left==right){
                return i;
            }
            left+=nums[i];
        }
        return -1;
    }
};