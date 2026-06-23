class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n= gain.size();
        vector<int>altitude;
        altitude.push_back(0);
        for(int i=0;i<n;i++){
           altitude.push_back((gain[i]+altitude[i]));
        }
        int maxi=altitude[0];
       for(auto it:altitude){
         maxi= max(maxi, it);
       }
        return maxi;

    }
};