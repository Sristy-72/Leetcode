class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        int maj= nums[0];
        int cnt=1;
        for(int i=1;i<n;i++){
            if(nums[i]==maj){
                
                cnt++;
            }
            else if(cnt==0 ){
              maj= nums[i];
              cnt++;
            }
             else{
                cnt--;
            }
        }
        return maj;
    }
};