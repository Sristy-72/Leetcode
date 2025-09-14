class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
       for(int i=0;i<n;i++){
        sort(nums.begin(), nums.end());
       } 
    }
};