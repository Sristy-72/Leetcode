class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     int n=nums.size();
     int pivot=-1;
     for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            pivot=i;
            break;
        }
     }  
    if(pivot==-1) return reverse(nums.begin(), nums.end());
    // finding righmost element just bigger than pivot element
    for(int i=n-1;i>=pivot+1;i--){
        if(nums[i]>nums[pivot]){
            swap(nums[i],nums[pivot]);
            break;
        }
    }
    reverse(nums.begin()+pivot+1, nums.end());
    }
};