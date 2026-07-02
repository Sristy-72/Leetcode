class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            if(ans[index[i]]!=-1){
                ans.insert(ans.begin()+index[i],nums[i]);
            }
            else{
               ans[index[i]]=nums[i];
            }
           
        }
        ans.resize(n);
        return ans;
    }
};