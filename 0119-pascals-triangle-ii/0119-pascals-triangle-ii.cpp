class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>arr;
      vector<int >ans;
        for(int i=0;i<=rowIndex;i++){
            vector<int>v(i+1,1);
            for(int j=1;j<i;j++){
            v[j]=arr[i-1][j-1] + arr[i-1][j];
            
            }
            
                arr.push_back(v);
            
        }
        return arr[rowIndex];
    }
};