class Solution {
public:
    long long maxProduct(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        long long fs = nums[0];
        long long ss = nums[1];

        long long secondmaxi = nums[n - 2];
        long long firstmaxi = nums[n - 1];

        long long pro1 = fs * ss * 100000;
        long long pro2 = secondmaxi * firstmaxi * 100000;
        long long pro3 = fs * firstmaxi * (-100000);

        return max(pro1, max(pro2, pro3));
    }
};