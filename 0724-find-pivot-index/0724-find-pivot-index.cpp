class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        // int total=0;
        // for(int a:nums){
        //     total+=a;
        // }
        // int left=0;
        // for(int i=0;i<n;i++){
        //     int right= total-left-nums[i];
        //     if(left==right){
        //         return i;
        //     }
        //     left+=nums[i];
        // }
        // return -1;
        
        for(int i=0;i<n;i++){
            int left=0;
            int right=0;
            for(int j=0;j<i;j++){
              left=left+nums[j];
            }
            for(int j=i+1;j<n;j++){
                right= right+ nums[j];
            }
            if(left==right) return i;
        }
        return -1;
    }
};