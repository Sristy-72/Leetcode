class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       int n= nums.size();
       int cnt=0;
       for(int i=0;i<n;i++){
        if(i%2==0 && nums[i]<0){
            for(int j= i+1;j<n;j++){
                if(nums[j]>0){
                    swap(nums[i],nums[j]);
                    break;
                }
            }
        }
        else if(i%2==1 && nums[i]>0){
            for(int j=i+1;j<n;j++){
                if(nums[j]<0) {
                    swap(nums[i],nums[j]);
                    break;
                }
            }
        }
       } 
       return nums;
    }
};