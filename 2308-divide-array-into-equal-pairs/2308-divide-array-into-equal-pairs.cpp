// class Solution {
// public:
//     bool divideArray(vector<int>& nums) {
//         int n= nums.size();
//         if(n%2!=0) return false;
//         vector<bool>used(n,false);

//        for(int i=0;i<n;i++){
//         if(used[i])continue;
//         bool foundpair= false;
//         for(int j=1;j<n;j++){
//             if( !used[j] && nums[i]==nums[j]){
//             used[j]=true;
//             foundpair=true;
//             }
//         }
//         if(!foundpair) return false;
//        } 
//        return true;
//     }
// };
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        if (n % 2 != 0) return false; // If odd length, cannot be divided into pairs

        vector<bool> used(n, false); // Track used elements

        for (int i = 0; i < n; i++) {
            if (used[i]) continue; // Skip if already paired
            bool foundPair = false;

            for (int j = i + 1; j < n; j++) {
                if (!used[j] && nums[i] == nums[j]) { // Find an unpaired matching element
                    used[j] = true;
                    foundPair = true;
                    break;
                }
            }

            if (!foundPair) return false; // If no pair is found, return false
        }

        return true;
    }
};
