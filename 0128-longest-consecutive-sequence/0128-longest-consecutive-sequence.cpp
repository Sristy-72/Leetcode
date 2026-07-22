class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        int curr_cnt=1;
        int max_cnt=0;
        int curr_idx=0;
        if(n==1) return 1;
        sort(nums.begin(), nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]) curr_idx++;
            else if(nums[i]==(nums[curr_idx]+1)){
                curr_idx++;
                curr_cnt++;
            }
            else {
               curr_cnt=1;
               curr_idx++;
            }  
             max_cnt=max(curr_cnt, max_cnt);
        }
        return max_cnt;
    }
};