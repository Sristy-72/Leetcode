class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      int cnt1=0,cnt2=0;
        int m1=nums[0],m2=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==m1)cnt1++;
            else if(nums[i]==m2)cnt2++;

            else if(cnt1==0){
                m1=nums[i];
                cnt1++;
            }
            else if(cnt2==0){
                m2=nums[i];
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        
        cnt1=0;
        cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==m1)cnt1++;
            else if(nums[i]==m2)cnt2++;
        }
        vector<int>ans;
        if(cnt1> nums.size()/3)ans.push_back(m1);
        if(cnt2>nums.size()/3)ans.push_back(m2);
        return ans;
    }
};