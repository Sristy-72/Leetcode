class Solution {
public:
    void sortColors(vector<int>& nums) {
      int n= nums.size();
     int end=n-1;
     int st=0;
     int mid=0;
     while(mid<=end){
        if(nums[mid]==0){
            swap(nums[mid],nums[st]);
            mid++;
            st++;
        }
        else if(nums[mid]==2){
            swap(nums[mid], nums[end]);
            end--;
        }
        else{
            mid++;
        }
     }   
    }
};