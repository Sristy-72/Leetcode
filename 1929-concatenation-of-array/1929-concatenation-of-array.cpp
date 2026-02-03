class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
       vector<int>ans(2*n);
        // for(int i=0;i<2;i++){
        //     for(int j=0;j<n;j++){
        //         ans.push_back(nums[j]);
        //     }
        // }

        for(int i=0;i<n;i++){
            ans[i]= nums[i];
            ans[n+i]=nums[i];
        }
        return ans;
    }
};