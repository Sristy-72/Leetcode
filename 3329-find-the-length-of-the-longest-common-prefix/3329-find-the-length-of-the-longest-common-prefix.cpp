class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
     unordered_set<int> st;

        //123
        //st : {123, 12, 1, 12345, 1234, }
        for(int val : arr1) {
            while(!st.count(val) && val > 0) {
                st.insert(val);

                val = val/10;
            }
        }


        int result = 0; //LCP
        for(int num : arr2) {
            while(!st.count(num) && num > 0) {
                num /= 10;
            }

            if(num > 0) {
                result = max(result, static_cast<int>(log10(num)) + 1);
            }
        }

        return result;   
    }
};