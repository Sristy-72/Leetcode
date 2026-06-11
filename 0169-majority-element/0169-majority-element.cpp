class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        int cnt1=1;
        int maj=nums[0];
        for(int i=1;i<n;i++){
             if(nums[i]==maj){
                cnt1++;

             }
              else if(cnt1==0){
                maj= nums[i];
                cnt1++;
            }
            else cnt1--;
          

        }
        return maj;
    }
};