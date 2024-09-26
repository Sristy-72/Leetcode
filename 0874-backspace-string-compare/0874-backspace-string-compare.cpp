class Solution {
public:
    //     int n = s.length();
    //     string temp = "";
        
    //     int i = 0;
    //     while(i < n) {
    //         if(s[i] != '#') {
    //             temp.push_back(s[i]);
    //         } else if(!temp.empty()) {
    //             temp.pop_back();
    //         }
    //         i++;
    //     }
        
    //     return temp;
    // }
    // bool backspaceCompare(string s, string t) {
    //     return buildString(s) == buildString(t);


    bool backspaceCompare(string s ,string t){
        stack<int>s1,s2;
        string str1,str2;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#' && !s1.empty()){
            s1.pop();
            }
            else if(s[i]!='#'){
                s1.push(s[i]);
            }
        }
        for(int j=0;j<t.size();j++){
            if(t[j]=='#' && !s2.empty()){
                s2.pop();
            }
            else if(t[j]!='#'){
                s2.push(t[j]);
            }
        }
          while(!s1.empty()){
                 
                 str1.push_back(s1.top());
                 s1.pop();
                 
         }
            
         while(!s2.empty()){
                 
                 str2.push_back(s2.top());
                 s2.pop();
                 
         }      
       
        return str1==str2;
    }
};