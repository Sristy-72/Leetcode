class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>st;
       int n= s.size();
    //    for(int i=0;i<n/2;i++){
    //     swap(s[i],s[n-i-1]);
    //    }
    for(int i=0;i<n;i++){
        st.push(s[i]);
    }
    int i=0;
    while(!st.empty()){
        s[i] =st.top();
        i++;
       st.pop();
    }
    }
};