class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
   int n= arr.size();
        unordered_map<int,int>mp;
        set<int>st(arr.begin(),arr.end());
        int rank=1;
        for(auto it:st){
            mp[it]=rank;
            rank++;
        }
        for(int i=0;i<n;i++){
           arr[i]=mp[arr[i]]; 
        }
 return arr;
    }
};