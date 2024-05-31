class Solution {
public:
vector<int> singleNumber(vector<int>& nums) {
 unordered_map<int, int> counts;
for (int num : nums) {
 counts[num]++;
 }

vector<int> result;
for (auto& [num, count] : counts) {
if (count == 1) {
 result.push_back(num);
}
}
 return result;  
}
};