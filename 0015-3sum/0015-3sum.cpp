class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
       
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        set<vector<int>>st;
        for(int i=0;i<n;i++){
             int left=i+1;
             int right= n-1;
            int first= nums[i];
            while(left<right){
                if(first+ nums[left]+ nums[right]==0){
                    vector<int>v={first,nums[left], nums[right]};
                    if(st.find(v)==st.end()){
                        st.insert(v);
                     ans.push_back(v);
                    }
                    
                    left++;
                    right--;
                }
                else if(first+ nums[left]+ nums[right]>0){
                    right--;
                }
                else left++;
            }
           
        }
        return ans;
    }
};