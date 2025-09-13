class Solution {
public:
    int maxFreqSum(string s) {
      unordered_map<char,int>m;
        unordered_map<char,int>m1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' ||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                m[s[i]]++;
            }
            else{
                m1[s[i]]++;
            }
        }
        int max_v=0,max_c=0;
        for(auto it:m){
            if(it.second>max_v)max_v=it.second;
        }
        for(auto it:m1){
            if(it.second>max_c)max_c=it.second;
        }
        return max_v+max_c;  
    }
};