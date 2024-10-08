class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     unordered_map<int, int> nextGreaterMap;
    stack<int> st;
    for (int i = nums2.size() - 1; i >= 0; --i) {
        while (!st.empty() && st.top() <= nums2[i]) {
            st.pop();
        }
        nextGreaterMap[nums2[i]] = st.empty() ? -1 : st.top();
        // if(st.empty()){
        //    nextGreaterMap[nums2[i]]=-1;
        // }
        // else {
        //     nextGreaterMap[nums2[i]]= st.top();
        // }
        st.push(nums2[i]);
    }
    vector<int> ans;
    for (int num : nums1) {
        ans.push_back(nextGreaterMap[num]);
    }

    return ans;   
    }
};