class Solution {
public:
    int passThePillow(int n, int time) {
     //first approach (simulation:=do what is asked)
    //  when we are going left to right then we will add and when we will move from right to left we will subtract
     int pillowpos  = 1;
        int dir  = 1;// left to right

        while(time > 0) {
            if(pillowpos + dir >=1 && pillowpos + dir <= n) {
                pillowpos += dir;
                time--;
            } else {
                dir *= -1;
            }
        }
        return pillowpos;   

    }
};