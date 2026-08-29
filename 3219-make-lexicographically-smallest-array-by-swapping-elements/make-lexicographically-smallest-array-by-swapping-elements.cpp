class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();

        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; i++) {
            arr[i] = {nums[i], i};
        }
        
        sort(arr.begin(), arr.end());

        int start = 0;

        while (start < n) {
            int end = start;

            while (end + 1 < n && arr[end + 1].first - arr[end].first <= limit) {
                end++;
            }

            vector<int> index;
            for (int j = start; j <= end; j++) {
                index.push_back(arr[j].second);
            }

            sort(index.begin(), index.end());

            for (int i = 0; i < index.size(); i++) {
                nums[index[i]] = arr[start + i].first;
            }

            start = end + 1;
        }

        return nums;
    }
};