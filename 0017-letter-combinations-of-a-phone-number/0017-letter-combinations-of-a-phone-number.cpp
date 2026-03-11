class Solution {
public:

    void helper(string digits, vector<string>& map, vector<string>& ans, int ind, string output){
        if(ind == digits.size()){
            ans.push_back(output);
            return;
        }

        int num = digits[ind] - '0';
        string val = map[num];

        for(int i = 0; i < val.size(); i++){
            output += val[i];
            helper(digits, map, ans, ind + 1, output);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        if(digits.size() == 0) return {};

        vector<string> map = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string output;

        helper(digits, map, ans, 0, output);

        return ans;
    }
};