class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int m= grid.size();
        int n= grid[0].size();
        vector<int>arr;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr.push_back(grid[i][j]);
            }
        }
        
        sort(arr.begin(), arr.end());
        int size= arr.size();
        int missing=-1;
        int repeated=-1;
        if(arr[0]!=1) missing =1;
       
       
        for(int i=0;i<size-1;i++){
            
            if(arr[i]==arr[i+1]){
                repeated=arr[i];
            }
            if((arr[i+1]-arr[i])>1){
                missing=arr[i]+1;
            }
        }
        if(missing==-1) missing = size;
        return {repeated, missing};
    }
};