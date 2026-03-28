class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int cnt=0;
        int i=0;
       int j= n-1;
       sort(nums.begin(), nums.end());
        while(i<j){
           if(nums[i]+nums[j]==k){
            cnt++;
            i++;
            j--;
           } 
           else if(nums[i]+nums[j]<k){
            i++;
           }
           else{
            j--;
           }

            
        }
        return cnt;
    }
};