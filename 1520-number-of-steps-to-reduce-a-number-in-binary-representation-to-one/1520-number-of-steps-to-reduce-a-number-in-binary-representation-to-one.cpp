class Solution {
public:
   void addOne(string &s){
    int i=s.length()-1;
    while(i>=0 && s[i]!='0'){
    s[i]='0';
     i--;
    }
    if(i<0){
     s='i'+s;
    }
    else{
    s[i]='i';
    }
   }
    int numSteps(string s) {
    int op=0;
     while(s.length()>1){
    int n=s.length();
     if(s[n-1]=='0'){// this shows that the given string is even
     s.pop_back();
     }
     else{// this is for odd string 
    addOne(s);
     }
     op++;
     }
     return op;
    }
};