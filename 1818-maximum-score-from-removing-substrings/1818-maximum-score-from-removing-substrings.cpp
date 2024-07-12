class Solution {
public:
    int maximumGain(string s, int x, int y) {
       int n     = s.length();
        int score = 0;

        string maxStr = (x > y) ? "ab" : "ba";
        string minStr = (x < y) ? "ab" : "ba";

        //First Pass
        string temp_first     = removeSubstring(s, maxStr);
        int L                 = temp_first.length();
        int removedPairsCount = (n - L) / 2;
        score                += removedPairsCount * max(x, y);


        //Second Pass
        string temp_second = removeSubstring(temp_first, minStr);
        removedPairsCount  = (L - temp_second.length()) / 2;
        score             += removedPairsCount * min(x, y);

        return score;
    }

    string removeSubstring(string& inputString, string& matchStr) {
        int j = 0;

        for (int i = 0; i < inputString.size(); i++) {
            inputString[j++] = inputString[i];

            if (j > 1 &&
                inputString[j - 2] == matchStr[0] &&
                inputString[j - 1] == matchStr[1]) {
                j -= 2;
            }
        }

        inputString.erase(inputString.begin() + j, inputString.end());

        return inputString;  
    }
};