class Solution {
public:
// void bfs(vector<vector<int>>&adjls ,vector<int>&vis,int start ){
//    vis[start]=1;
//     queue<int>q;
//    q.push(start);
//    while(!q.empty()){
//     int node= q.front();
//     q.pop();
//     for(auto it:adjls[node]){
//         if(!vis[it]){
//             vis[it]=1;
//             q.push(it);
//         }
//     }
//    } 
// }
void dfs(vector<vector<int>>adjls, vector<int>&vis, int node){
    vis[node]=1;
    for(auto it:adjls[node]){
        if(!vis[it]){
            dfs(adjls, vis, it);
        }
    }

}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n= isConnected.size();
        vector<int>vis(n,0);
       vector< vector<int>>adjls(n);
        // converting adjacency matrix to adjacency list
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               if(isConnected[i][j]==1 && i!=j){
                adjls[i].push_back(j);
                adjls[j].push_back(i);
               }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
         if(!vis[i]){
            cnt++;
            // bfs(adjls, vis,i);
            dfs(adjls, vis,i);
         }
         
        }

      return cnt;
       
    }
};