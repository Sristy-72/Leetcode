class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupsize) {
       if (hand.size() % groupsize) {
            return false;
        }

        unordered_map<int, int> counts;
        for (const auto& i : hand) {
            ++counts[i];
        }

        priority_queue<int, vector<int>, greater<int>> min_heap(hand.begin(), hand.end());
        for (int i = 0; i < hand.size() / groupsize; ++i) {
            while (counts[min_heap.top()] == 0) {
                min_heap.pop();
            }
            int start = min_heap.top(); min_heap.pop();
            for (int j = 0; j < groupsize; ++j) {
                --counts[start];
                if (counts[start] < 0) {
                    return false;
                }
                ++start;
            }
        }
        return true;  
    }
};