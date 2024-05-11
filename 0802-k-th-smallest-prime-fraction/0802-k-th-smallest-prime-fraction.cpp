class Solution {
public:
    class Pair{
    public:
        int numerator;
        int denominator;
        Pair(){

        }
        Pair(int numerator, int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }
    };

    class compare{
    public:
        bool operator()(Pair &a, Pair &b){
            double x = (double)a.numerator / (double)a.denominator;
            double y = (double)b.numerator / (double)b.denominator;
            return x > y;
        }
    };


    vector<int> kthSmallestPrimeFraction(vector<int> &nums, int k){
        vector<int> ans;
        priority_queue<Pair, vector<Pair>, compare> pq;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                Pair p(nums[i], nums[j]);
                pq.push(p);
            }
        }
    
        while(k>1){
            pq.pop();
            k--;
        }
        auto a = pq.top();
        ans.push_back(a.numerator);
        ans.push_back(a.denominator);
        return ans;
    }
};