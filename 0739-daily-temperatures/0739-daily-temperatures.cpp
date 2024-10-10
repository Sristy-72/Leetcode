class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    //     int n=temperatures.size();
    //     int ans;
    //    for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(temperatures[j]>temperatures[i]){
    //             ans=j-i;
    //         }
    //         else {
    //             return -1;
    //         }
    //     }
    //    } 
    //    return ans;
      stack<int>st;
      int n=temperatures.size();
      vector<int>result(n);
      for(int i=n-1;i>=0;i--){
         while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
            st.pop();
         }
         if(st.empty()){
            result[i]=0;
         }
         else{
            result[i]=st.top()-i;
         }
         st.push(i);
      }
    return result;
    }
};