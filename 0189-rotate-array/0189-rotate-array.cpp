class Solution {
public:
void reverse(vector<int>&nums, int s, int end){
    while(s<end){
        swap(nums[s],nums[end]);
        s++;
        end--;
    }
}
    void rotate(vector<int>& nums, int k) {
       int n= nums.size();
       k= k%n;
       reverse(nums, 0,n-1);
       reverse(nums,0,k-1);
       reverse(nums, k, n-1);
       
    }
};