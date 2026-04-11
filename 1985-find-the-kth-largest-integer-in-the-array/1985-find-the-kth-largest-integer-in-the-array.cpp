class Solution {
public:
static bool cmp(string a, string b){
    if(a.size()==b.size()) return a>b; // sort in decresing order
    return a.size()>b.size();
}
    string kthLargestNumber(vector<string>& nums, int k) {
        int n= nums.size();
        sort(nums.begin(), nums.end(), cmp);
       
        return nums[k-1];
    }
};