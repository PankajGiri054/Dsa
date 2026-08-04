class Solution {
public:
    vector<int> findMissingElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;

        sort(arr.begin(), arr.end());

        int x = arr[0];

        for (int i = 0; i < n; i++) {
            while (x < arr[i]) {
                ans.push_back(x);
                x++;
            }
            x++;
        }

        return ans;
    }
};