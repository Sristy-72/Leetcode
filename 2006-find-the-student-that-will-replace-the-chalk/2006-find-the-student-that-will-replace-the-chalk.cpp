class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
      long sum = 0;
        for (int& c : chalk) sum += c;
        
        int chalkLeft = k % sum; // chalks for the last round
 
        int n = chalk.size();
        
        for (int i = 0; i < n; ++i) {
            if (chalk[i] > chalkLeft) return i;
            chalkLeft -= chalk[i];
        }
        
        return -1;  
    }
};