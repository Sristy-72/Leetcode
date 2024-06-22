class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
      int left = 0, odds = 0, count = 0, ans = 0;
        for(int right = 0; right < nums.size(); right++){
            if(nums[right] % 2 == 1){
                odds++;
                if(odds >= k){
                    count = 1;
                    //move left bound while counting
                    while(nums[left++] % 2 == 0){
                        count++;
                    }
                    ans += count;
                }
            }else if(odds >= k){
                ans += count;
            }
        }
        return ans;
    }
};