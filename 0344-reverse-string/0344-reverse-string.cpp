class Solution {
public:
void reverseString(vector<char>& s) {
    // approach 1
// int n=s.size();
// for(int i=0;i<n/2;i++){
// swap(s[i],s[n-1-i]);
// }

// approach 2(stl)
reverse(s.begin(),s.end());

// approach 3 (using stack)
// stack<char>st;
// for(int i=0;i<s.size();i++){
//     st.push(s[i]);
// }
// int i=0;
// while(!st.empty()){
    
//     s[i]=st.top();
//     i++;
//     st.pop();
// }


}

};