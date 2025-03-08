class Solution {
public:
    int minimumRecolors(string blocks, int k) {
    int n= blocks.size();
    int result=k;
    for(int i=0;i<=n-k;i++){
        int white =0;
        for(int j=i;j-i+1<=k;j++){
            if(blocks[j]=='W'){
            white++;
            }
        }
         result= min(result,white);   
    } 
    return result;
    }

};