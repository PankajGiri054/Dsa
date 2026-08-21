class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n;
        double result = 1.0;
        if (exp < 0) {
            x = 1 / x;
            exp = -exp;
        }

        while (exp > 0) {
            if (exp % 2 == 1) {
                result = result * x;
            }
            x = x * x;
            exp = exp / 2;
        }

        return result;
    }
};