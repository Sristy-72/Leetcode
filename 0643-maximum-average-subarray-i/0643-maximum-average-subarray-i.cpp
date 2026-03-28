class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        
        
        for(int i=0;i<k;i++){
            sum= sum+nums[i];
        }
        int maxi=sum;
        for(int i=k;i<n;i++){
            sum= sum+ nums[i]- nums[i-k];
            maxi= max(maxi, sum);
        }
        double ans= double(maxi)/k;
        return ans;
    }
};