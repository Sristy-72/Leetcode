class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if(n==0) return 0;
        sort(nums.begin(), nums.end());
        int curr_cnt=1;
        int max_cnt=1;
        for(int i=1;i<n;i++){
          if(nums[i]==nums[i-1])continue;
          else if(nums[i]==nums[i-1]+1){
             curr_cnt++;
              max_cnt= max(max_cnt, curr_cnt);
          }
          else{
            curr_cnt=1;
          }
        }
        return max_cnt;
    }
};