class Solution {
public:
  string generate(string temp){
    vector<int>arr(26);
    for(auto it:temp){
        arr[it-'a']++;
    }
    string arranged_word="";
    for(int i=0;i<26;i++){
        if(arr[i]!=0) {
            int freq= arr[i];
          arranged_word+=string(freq, i+'a'); // used to form string from the freq of words 

        }
       
    }
     return arranged_word;
  }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n= strs.size();
        unordered_map<string, vector<string>>mp;
        vector<vector<string>>ans;
        for(int i=0;i<n;i++){
            string temp=strs[i];
            string word= generate(temp);
              mp[word].push_back(temp);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};