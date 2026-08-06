class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    //     int n= nums.size();
    //     set<int>st;
    //     int ans=0;
    //     for(auto it:nums) st.insert(it);
    //     for(int i=0;i<n;i++){
    //     int curr_ele= nums[i];
    //     int pre_ele= curr_ele-1;
    //      int cnt=0;
    //     if(st.find(pre_ele)==st.end()){ // if previous element is not found
    //         while(st.find(curr_ele)!=st.end()){ // then chain to next element 
    //             curr_ele++;
    //             cnt++;
    //         }
    //     }
    //     ans= max(ans, cnt);
    //    }
    //    return ans;


    unordered_set<int>st(nums.begin(),nums.end());
    int ans=0;
    for(auto it:st){
        int curr_ele= it;
        int cnt=1;
        if(st.find(it-1)==st.end()){
            while(st.find(curr_ele+1)!=st.end()){
                cnt++;
                curr_ele++;
            }
        }
        ans= max(ans, cnt);
    }
    return ans;
    }
};