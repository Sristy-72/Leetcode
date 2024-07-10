class Solution {
public:
    int minOperations(vector<string>& logs) {
     int height=0;
     for(string &s:logs){
        if(s=="./"){
            continue;
        }
        if(s=="../"){
            // height--;
            // if(depth<0){
            //     height=0;
            // }
            height=max(0,height-1);
        }
        else{
            height++;
        }
        
     }
     return height;
    }
};