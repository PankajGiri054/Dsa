class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {

        int one = 0;

        for (char ch : s) {
            if (ch == '1') {
                one++;
            }
        }

        string str = "1" + s + "1";

        vector<pair<char, int>> arr;

        int n = str.length();
        int i = 0;

        while (i < n) {

            int j = i;

            while (j < n && str[j] == str[i]) {
                j++;
            }

            arr.push_back({str[i], j - i});

            i = j;
        }

        int ans = 0;

        for (int i = 1; i < arr.size() - 1; i++) {

            if (arr[i].first == '1') {

                if (arr[i - 1].first == '0' && arr[i + 1].first == '0') {

                    int gain = arr[i - 1].second + arr[i + 1].second;

                    ans = max(ans, gain);
                }
            }
        }

        return one + ans;
    }
};