class Solution {
public:
    int lengthOfLongestSubstring(string s) {
int i,j;
int maxlen=0;
int n=s.length();
for(i=0;i<n;i++){
    bool visited[256] ={false};
for(j=i;j<n;j++){
    if(visited[s[j]]==true){
        break;
    }
    visited[s[j]]=true;
    maxlen=max(maxlen,j-i+1);
}
}

return maxlen;
    }
};