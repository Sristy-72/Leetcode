// class Solution {
// public: 
// vector<string>result;
// bool isValid(string str){
//     int cnt=0;
//   for (char ch: str){
//     if(ch== '(')
//         cnt++;
//     else
//         cnt--;
//     if(cnt<0)
//     return false;
//   }
//   return cnt==0;
// }
// void solve(string&str,int n){
//     if(str.length()==2*n){
//         if(isValid(str)){
//           result.push_back(str);  
//         }
//     return ;
//     }
//      str.push_back('(');
//         solve(str,n);
//         str.pop_back();
//      str.push_back(')');
//      solve(str,n);
//      str.pop_back();   
// }

//     vector<string> generateParenthesis(int n) {
//         string curr = "";
//         solve(curr, n);
//         return result;
//     }
// };


class Solution {
public:
vector<string>result;
void solve(string str, int n, int open, int close){
    if(str.length()==2*n){
        result.push_back(str);
        return ;
    }
    if(open<n){
        str.push_back('(');
        solve(str, n, open+1, close);
        str.pop_back();
    }
    if(close<open){
        str.push_back(')');
        solve(str,n,open,close+1);
        str.pop_back();
    }

}
    vector<string> generateParenthesis(int n) {
        string str= "";
        solve(str,n,0,0);
        return result;
    }
};