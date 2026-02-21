class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int n= candies.size();
       int maxi= candies[0];
       for(int i=0;i<n;i++){
        if(candies[i]>maxi){
            maxi=candies[i];
        }
       }
       vector<bool>cont;
       for(int i=0;i<n;i++){
        if(candies[i]+ extraCandies>=maxi){
            cont.push_back(true);
        }
        else{
            cont.push_back(false);
        }
       } 
       return cont;
    }
};