class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>st(nums.begin(), nums.end());
        int n= nums.size();
       
         int ans=0;
        for(auto it :st){
             int curr_ele=it;
             int pre_ele= it-1;
             int cnt=0;
             if(st.find(pre_ele)==st.end()){
                while(st.find(curr_ele)!=st.end()){
                    cnt++;
                    curr_ele++;
                }
             }
        ans= max(ans, cnt);
        }
        return ans;
    }
};