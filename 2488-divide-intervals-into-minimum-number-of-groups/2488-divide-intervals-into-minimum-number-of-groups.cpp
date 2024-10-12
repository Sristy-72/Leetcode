class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
    sort(begin(intervals), end(intervals));

        priority_queue<int, vector<int>, greater<int>> pq; //stores end point of groups

        for(vector<int>& interval : intervals) {
            int start = interval[0];
            int end   = interval[1];

            if(!pq.empty() && pq.top() < start) {
                pq.pop();
            }
            pq.push(end);
        }

        return pq.size();    
    }
};