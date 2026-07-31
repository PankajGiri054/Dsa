class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int count=0;
        vector<int>freq(26,0);
        for(int i=0;i<n;i++){
            freq[word[i]-'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
        for(int i=0;i<26;i++){
            count+=freq[i]*((i/8)+1);
        }
        return count;
    }
};