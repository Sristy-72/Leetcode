class Solution {
public:
   double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int, double>>> graph(n);
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0], v = edges[i][1];
            double prob = succProb[i];
            graph[u].push_back({v, prob});
            graph[v].push_back({u, prob});
        }

        vector<double> prob(n, 0.0);
        prob[start] = 1.0;

        priority_queue<pair<double, int>> pq;
        pq.push({1.0, start});

        while (!pq.empty()) {
            double currProb = pq.top().first;
            int currNode = pq.top().second;
            pq.pop();

            if (currNode == end) {
                return currProb;
            }

            for (auto& neighbor : graph[currNode]) {
                int nextNode = neighbor.first;
                double edgeProb = neighbor.second;

                if (currProb * edgeProb > prob[nextNode]) {
                    prob[nextNode] = currProb * edgeProb;
                    pq.push({prob[nextNode], nextNode});
                }
            }
        }

        return 0.0;
        
    }
};