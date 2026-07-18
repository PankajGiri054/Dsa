class Solution {
public:
    int GCD(int a, int b) {
        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }

    long long LCM(long long a, long long b) {
        return (a / GCD(a, b)) * b;
    }

    int maxLength(vector<int>& nums) {

        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {

            long long product = 1;
            long long lcm = 1;
            int gcd = 0;

            for (int j = i; j < n; j++) {
                if (product > LLONG_MAX / nums[j])
                    break;

                product *= nums[j];

                gcd = GCD(gcd, nums[j]);
                lcm = LCM(lcm, nums[j]);

                if (product == gcd * lcm) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};