class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        
        
        int cnt=0;
        int n= nums.size();
         for(int i=0;i<n-1;i++){
             int sum=0;
             int remaining_cnt=0;
             for(int j=i+1;j<n;j++){
                 sum = sum + nums[j];
                 remaining_cnt++;
             }
             
             int avg= sum/remaining_cnt;
             if(avg<nums[i]){
                 cnt++;
                
             }
         }
        return cnt;
    }
};