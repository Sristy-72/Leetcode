class Solution {
public:
void reverseString(vector<char>& s) {
// int n=s.size();
// for(int i=0;i<n/2;i++){
// swap(s[i],s[n-1-i]);
//reverse(s.begin(),s.end());
stack<char>st;
for(int i=0;i<s.size();i++){
    st.push(s[i]);
}
int i=0;
while(!st.empty()){
    
    s[i]=st.top();
    i++;
    st.pop();
}
}
// }
};