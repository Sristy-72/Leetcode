class Solution {
public:
    char findTheDifference(string s, string t) {
        // Approach 1(hashing)
    // unordered_map<char,int>mp;
    // for(char &ch:s){
    //     mp[ch]++;
    // }    
    // for(char &ch:t){
    //     // if(mp.find()==mp.end())
    //     // return ch
    //     mp[ch]--;
    //     if(mp[ch]<0)
    //     return ch;
    // }
    // return 'x';

    // approach 2(sum)
    int sum1=0;
    for(char&ch :s){
        sum1+=ch;
    }
    int sum2=0;
    for(char&ch:t){
        sum2+=ch;
    }
    return (char)(sum2-sum1);
    }
};