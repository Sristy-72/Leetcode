class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int n= gas.size();
       int tot_gas=0;
       int tot_cost=0;
       for(int i=0;i<n;i++){
        tot_gas= tot_gas+ gas[i];
        tot_cost= tot_cost+ cost[i];
       }
       if(tot_gas<tot_cost) return -1;
       int res=0;
       int total=0;
       for(int i=0;i<n;i++){
         total= total+ gas[i]- cost[i];
         if(total<0) {
            total=0;
            res=i+1;
         }
       }
       return res;
    }
};