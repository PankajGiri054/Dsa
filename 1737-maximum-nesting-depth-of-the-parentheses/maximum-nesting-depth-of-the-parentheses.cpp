class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        int dept=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                dept++;
            }
            if(s[i]==')'){
                dept--;
            }
            ans=max(ans,dept);
        }
        return ans;
    }
};