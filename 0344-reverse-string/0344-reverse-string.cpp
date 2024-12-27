class Solution {
public:
void reverse(vector<char>&s, int i,int n){
    // int n = s.size();
    if(i>=n/2){
        return;
    }
    swap(s[i], s[n-i-1]);
    reverse(s,i+1,n);
}
    void reverseString(vector<char>& s) {
           int n= s.size();
           int i=0;
        reverse(s,i,n);
        // stack<char>st;
     
    //    for(int i=0;i<n/2;i++){
    //     swap(s[i],s[n-i-1]);
    //    }
    // for(int i=0;i<n;i++){
    //     st.push(s[i]);
    // }
    // int i=0;
    // while(!st.empty()){
    //     s[i] =st.top();
    //     i++;
    //    st.pop();
    // }
    }
};