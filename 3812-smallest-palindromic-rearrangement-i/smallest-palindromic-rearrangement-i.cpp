class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
        if(n==1){
            return s;
        }
       vector<int>arr(26,0);
        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
        }
        string left="";
        string middle="";   
        for(int i=0;i<26;i++){
            for(int j=0;j<arr[i]/2;j++){
            left.push_back(i+'a');
            }
            if(arr[i]%2==1){
                middle.push_back(i+'a');
            }
        }
        string right=left;
        reverse(right.begin(),right.end());
        return left+middle+right;
    }
};