class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
     for(int i=0;i<grumpy.size();i++){
            grumpy[i]=grumpy[i]*customers[i];
        }
        int end=X-1,max=0;
        for(int i=0;i<grumpy.size()&&i<=end;i++){
            max+=grumpy[i];
        }
        int temp=max;
        for(end=end+1;end<grumpy.size();end++){
            temp=temp+grumpy[end]-grumpy[end-X];
            if(temp>max){
                max=temp;
            }
        }

        int sum_c=0,sum_a=0;
        for(int i=0;i<grumpy.size();i++){
            sum_c+=customers[i];
        }
        for(int i=0;i<grumpy.size();i++){
            sum_a+=grumpy[i];
        }
        return sum_c-sum_a+max;   
    }
};