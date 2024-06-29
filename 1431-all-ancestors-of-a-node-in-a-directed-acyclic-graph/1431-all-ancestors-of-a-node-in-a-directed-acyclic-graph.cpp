class Solution {
public:
void DFS(int u, unordered_map<int, vector<int>>& adj, vector<bool>& visited) {
        visited[u] = true;

        for(int &v : adj[u]) {
            if(visited[v] != true) {
                DFS(v, adj, visited);
            }
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
     vector<vector<int>> result;
        unordered_map<int, vector<int>> adj;

        for(vector<int>& vec : edges) { //O(E)
            int u = vec[0];
            int v = vec[1];

            adj[v].push_back(u); //v --> u
        }


        for(int u = 0; u < n; u++) {
            vector<int> ancestors;
            vector<bool> visited(n, false);
            DFS(u, adj, visited);

            for(int i = 0; i < n; i++) {
                if(i == u) continue;
                
                if(visited[i] == true) {
                    ancestors.push_back(i);
                }
            }

            result.push_back(ancestors);
        }



        
        return result;    
    }
};