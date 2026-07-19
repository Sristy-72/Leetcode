class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n-2;i++){
             int left=i+1;
             int right= n-1;
            int first= nums[i];
             if(i!= 0 && nums[i] == nums[i-1]) {
                continue;
            }
            while(left<right){
                if(first+ nums[left]+ nums[right]==0){
                    vector<int>v={first,nums[left], nums[right]};
                    ans.push_back(v);
                    while(left < right &&  nums[left]==nums[left+1]) left++;
                    while(left<right && nums[right]== nums[right-1]) right--;  
                    left++;
                    right--;
                }
                else if(first+ nums[left]+ nums[right]>0){
                    right--;
                }
                else left++;
            }
           
        }
        return ans;
    }
};