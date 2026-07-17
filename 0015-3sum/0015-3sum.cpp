class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       int n= nums.size();
       vector<vector<int>>ans;
       set<vector<int>>st;
       sort(nums.begin(), nums.end());
       

      for(int i=0;i<n;i++){
        int first= nums[i];
        int left=i+1;
       int right= n-1;
        while(left<right ){
            if(first+ nums[left]+ nums[right]==0){
                 vector<int>v={nums[left], nums[right], first};
                      sort(v.begin(), v.end());
                      if(st.find(v)==st.end()){
                        st.insert(v);
                        ans.push_back(v);
                        
            }
           left++;
            right--;
            }
            else if(first+ nums[left]+nums[right]>0){
                right--;
            }
            else left++;
            
        }
      }
      return ans;
    }
};