class Solution {
public:
int scoreOfString(string s) {
int score=0;
for(int i=0;i<s.size()-1;i++){   
score=score+abs(s[i]-s[i+1]);//The abs() function in C++ returns the absolute value of an integer number
}
 return score;
 }
};