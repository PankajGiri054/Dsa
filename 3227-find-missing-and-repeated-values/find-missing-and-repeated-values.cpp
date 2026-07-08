class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
int missing ;
        vector<int> arr;
        int n = grid.size();

        for (int i = 1; i <= n * n; i++) {

            int cnt = 0;

            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (grid[j][k] == i) {
                        cnt++;
                    }
                }
            }

            if (cnt == 2) {
                arr.push_back(i);    
            }

            if (cnt == 0) {
                 missing =i;  
            }
        }
arr.push_back(missing);
        return arr;
    }
};