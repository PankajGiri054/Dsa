class Solution {
public:
    int reverseDegree(string s) {
      //  int val=26;
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
int reverse=26-(s[i]-'a');
ans+=reverse*(i+1);
        }
        return ans;
    }
};