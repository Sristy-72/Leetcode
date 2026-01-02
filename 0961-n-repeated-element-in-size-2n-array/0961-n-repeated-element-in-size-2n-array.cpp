class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
       unordered_set<int>st;
       for(int s:nums){
        if(st.count(s)) return s;
        st.insert(s);
       }
       return -1;
    }
};