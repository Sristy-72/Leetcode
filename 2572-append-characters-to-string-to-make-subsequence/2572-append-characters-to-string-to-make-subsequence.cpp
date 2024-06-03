class Solution {
public:
int appendCharacters(string s, string t) {
int i=0,j=0;// i is for the string of s and j is for the string of t
while(i<s.size() && j<t.size()){
   if(s[i]==t[j]){
   i++;
   j++;
   }
   else{
   i++;
   }
}       
return t.size()-j; 
    }
};