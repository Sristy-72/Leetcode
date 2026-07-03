class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n= sentence.length();
        vector<int>arr(26);
       
        int cnt=0;
       for(int i=0;i<n;i++){

        // arr[sentence[i]-'a] --->index ----> index of array in which we will increase the frequency of element 
        if( arr[sentence[i]-'a'] ==0){
              arr[sentence[i]-'a']++;
              cnt++;
        }
        
       }
    
       

       return cnt==26;
    }
};