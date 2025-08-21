class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n= nums.size();
        long long cnt=0;
        long long ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt++;
               ans= ans+cnt; 
            }
            else{
                cnt=0;
            }
        }
        return ans;
    }
};