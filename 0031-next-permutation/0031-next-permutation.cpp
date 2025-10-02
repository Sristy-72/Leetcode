class Solution {
public:
    void allcomb(vector<int>& nums, vector<vector<int>>& ans, vector<int>& freq, vector<int> ds) {
        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (!freq[i]) {
                freq[i] = 1;
                ds.push_back(nums[i]);
                allcomb(nums, ans, freq, ds);
                ds.pop_back();
                freq[i] = 0;
            }
        }
    }

    // void nextPermutation(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<int> ds;
    //     vector<int> freq(n, 0);
    //     vector<vector<int>> ans;

    //     // generate all permutations
    //     allcomb(nums, ans, freq, ds);

    //     // sort permutations lexicographically
    //     sort(ans.begin(), ans.end());
    //      ans.erase(unique(ans.begin(), ans.end()), ans.end());

    //     // find current and set to next
    //     for (int i = 0; i < ans.size(); i++) {
    //         if (ans[i] == nums) {
    //             if (i == ans.size() - 1) 
    //                 nums = ans[0];      // wrap to first
    //             else 
    //                 nums = ans[i + 1];  // next permutation
    //             break;
    //         }
    //     }
     void nextPermutation(vector<int>& nums) {

        next_permutation(nums.begin(), nums.end());
    }
};
