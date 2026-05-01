class Solution {
public:
    double myPow(double x, int n) {
        long long N = n; // promote to long long

        if (N < 0) {
            x = 1 / x;
            N = -N; // safe now, because long long can hold 2147483648
        }

        double result = 1;
        double base = x;

        while (N > 0) {
            if (N % 2 == 1) {
                result *= base;   // multiply when bit is set
            }
            base *= base;         // square base
            N /= 2;               // shift exponent
        }

        return result;
    }
};
