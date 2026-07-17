class Solution {
public:
    int GCD(int a, int b){
        while(b != 0){
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }

    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int max_val = 0;
        for (int num : nums) {
            max_val = max(max_val, num);
        }
        vector<int> count(max_val + 1, 0);
        for (int num : nums) {
            count[num]++;
        }

        vector<long long> gcd_pair_counts(max_val + 1, 0);
        for (int i = max_val; i >= 1; --i) {
            long long multiples_count = 0;
            for (int j = i; j <= max_val; j += i) {
                multiples_count += count[j];
            }
            
            long long total_pairs = (multiples_count * (multiples_count - 1)) / 2;
    
            for (int j = 2 * i; j <= max_val; j += i) {
                total_pairs -= gcd_pair_counts[j];
            }
            gcd_pair_counts[i] = total_pairs;
        }

        vector<long long> prefix_sums(max_val + 1, 0);
        for (int i = 1; i <= max_val; ++i) {
            prefix_sums[i] = prefix_sums[i - 1] + gcd_pair_counts[i];
        }
        vector<int> ans;
        ans.reserve(queries.size());
        for (long long q : queries) {
            auto it = upper_bound(prefix_sums.begin(), prefix_sums.end(), q);
            ans.push_back(distance(prefix_sums.begin(), it));
        }

        return ans;
    }
};