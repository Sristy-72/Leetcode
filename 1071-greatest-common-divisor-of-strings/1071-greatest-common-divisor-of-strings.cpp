class Solution {
public:
// int gcd(int a, int b){
//     while(b!=0){
//         int temp=b;
//         b= b%a;
//         temp= a;
//     }
//     return a;
// }
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2!= str2+str1) return "";
        int g= __gcd(str1.length(),str2.length());
        return str1.substr(0,g);
    }
};