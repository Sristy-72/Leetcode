class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n-3;i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n-2;j++){
                int left=j+1;
                int right= n-1;
                if(j>i+1 && nums[j]==nums[j-1] ) continue;
                while(left<right){
                    long long sum= 1LL*nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum==target){
                        vector<int>v={nums[i],nums[j],nums[left],nums[right]};
                        ans.push_back(v);
                         while(left<right && nums[left]==nums[left+1] ) left++;
                         while(left<right && nums[right]== nums[right-1]) right--;
                          left++;
                         right--;
                         
                    }
                     else if(sum>target){
                         right--;
                     }
               else left++;
                }
            }
        }
        return ans;
    }
};