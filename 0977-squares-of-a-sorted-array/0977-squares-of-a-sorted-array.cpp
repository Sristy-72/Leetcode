class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }
        int j=n-1;
        int i=0;
        int k= j;
        while(i<j){
            if(nums[i]>nums[j]){
              ans[k--]= nums[i];
              i++;
            
            }
            else{
                ans[k--]=nums[j];
                j--;
            }
        }
        ans[0]=nums[i];
        return ans;
    }
};