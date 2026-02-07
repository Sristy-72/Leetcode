class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=1;
        int maj=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==maj) {
                cnt++;
            }
            else if(nums[i]!=maj && cnt==0){
                maj=nums[i];
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return maj;
    }
};