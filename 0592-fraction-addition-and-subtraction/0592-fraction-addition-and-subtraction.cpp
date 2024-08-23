class Solution {
public:
    string fractionAddition(string expression) {
     int num = 0, den = 1, sign = 1;
        int i = 0;

        while (i < expression.size()) {
            int num2 = 0, den2 = 0;

            // Extract numerator
            sign = (expression[i] == '-') ? -1 : 1;
            i += (expression[i] == '-' || expression[i] == '+');

            while (isdigit(expression[i])) {
                num2 = num2 * 10 + (expression[i++] - '0');
            }
            num2 *= sign;

            // Skip '/'
            i++;

            // Extract denominator
            while (i < expression.size() && isdigit(expression[i])) {
                den2 = den2 * 10 + (expression[i++] - '0');
            }

            // Add the fractions
            int lcm = std::lcm(den, den2);
            num = num * (lcm / den) + num2 * (lcm / den2);
            den = lcm;

            // Simplify the fraction
            int gcd = std::gcd(num, den);
            num /= gcd;
            den /= gcd;
        }

        return to_string(num) + "/" + to_string(den);   
    }
};