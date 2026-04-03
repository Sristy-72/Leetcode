class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int n=gain.size();
      vector<int>v(n+1,0);
      int altitude=0;
      for(int i=0;i<n;i++){
           v[i+1]=gain[i]+v[i];
          
      }  
      int maxi=v[0];
      for(int i=0;i<=n;i++){
        if(v[i]>maxi){
            maxi=v[i];
        }
      }
      return maxi;
    }
};