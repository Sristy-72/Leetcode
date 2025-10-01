class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int maxi=nums[0];
       int n= nums.size();
    //    for(int i=0;i<n;i++){
    //     int sum=0;
    //         for(int j=i;j<n;j++){
    //             sum=sum+nums[j];
    //             maxi=max(sum,maxi );
    //         }       
    //    }

    // 2nd approach (O(N))
    int sum=0;
    for(auto it:nums){
        sum=sum+it;
        maxi=max(sum, maxi);
        if(sum<0) sum=0;
    }
    return maxi;
    }
};