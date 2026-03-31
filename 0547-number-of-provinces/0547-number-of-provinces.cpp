class Solution {
public:
void noOfProvince(vector<vector<int>>&isConnected,vector<int>&vis,int start){
    vis[start]=1;
    int n= isConnected.size();
    for(int i=0;i<n;i++){
     if(isConnected[start][i]==1 && vis[i]==0){
        vis[i]=1;
        noOfProvince(isConnected, vis, i);
     }
    }

}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n= isConnected.size();
        int u, v;
       vector<int>vis(n,0);
    //    vector<vector<int>>adj(n);
    //     for(int i=0;i<n;i++){
    //      for(int j=0;j<n;j++){
    //         if(isConnected[i][j]==1 && i!=j){
    //             adj[i].push_back(j);      
    //         }
    //      }
    //     }
        int cnt=0;
        int start=0;
       for(int i=0;i<n;i++){
       if(vis[i]==0){
        cnt++;
        noOfProvince(isConnected,vis, i);
       }
     }
     return cnt;
    }
};