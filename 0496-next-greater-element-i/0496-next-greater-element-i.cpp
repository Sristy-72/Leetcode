class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     unordered_map<int, int> nextGreaterMap;
    stack<int> st;

    // Traverse nums2 from right to left
    for (int i = nums2.size() - 1; i >= 0; --i) {
        int num = nums2[i];

        // Maintain elements in the stack that are greater than the current number
        while (!st.empty() && st.top() <= num) {
            st.pop();
        }

        // If the stack is empty, then there is no greater element
        nextGreaterMap[num] = st.empty() ? -1 : st.top();

        // Push the current number onto the stack
        st.push(num);
    }

    // Build the result for nums1 based on the nextGreaterMap
    vector<int> ans;
    for (int num : nums1) {
        ans.push_back(nextGreaterMap[num]);
    }

    return ans;   
    }
};