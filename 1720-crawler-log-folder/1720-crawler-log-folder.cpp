class Solution {
public:
    int minOperations(vector<string>& logs) {
        // APPROACH 1 (SIMPLE SIMULATION)
        // TC=0(N)
        //SC=0(1)
    //  int height=0;
    //  for(string &s:logs){
    //     if(s=="./"){
    //         continue;
    //     }
    //     if(s=="../"){
    //         // height--;
    //         // if(depth<0){
    //         //     height=0;
    //         // }
    //         height=max(0,height-1);
    //     }
    //     else{
    //         height++;
    //     }
        
    //  }
    //  return height;

     // APPROACH 2(USING STACK)
     //TC=0(N)
     //SC=0(N)
     stack<string>st;
     for(string&s:logs){
        if(s=="./"){
            continue;
        }
        if(s=="../"){
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            st.push(s);
        }
     }
     return st.size();
    }
};