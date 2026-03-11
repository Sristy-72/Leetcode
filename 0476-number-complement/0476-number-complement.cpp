class Solution {
public:
    int findComplement(int num) {
        int result=0;
        int power= 1;
        if(num==0)return 1;
        while(num>0){
            int bit=num%2;
            if(bit==0){
                result= result+power;
            }
            power*= 2;
            num=num/2;
        }
        return result;
    }
};