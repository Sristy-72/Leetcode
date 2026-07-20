class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int ans=nums[0]+nums[1] + nums[2];
        for(int i=0;i<n;i++){
            int first= nums[i];
             int left= i+1;
             int right= n-1;
             while(left<right){
                int current_sum= first+nums[left]+nums[right];
                if(current_sum==target){
                 return target;
                }
                if(abs(target-current_sum)<abs(target-ans)) {
                    ans=current_sum;
                }
                else if(current_sum>target){
                    right--;
                }
                else{
                    left++;
                } 
             }   
        }
        return ans;
    }
};