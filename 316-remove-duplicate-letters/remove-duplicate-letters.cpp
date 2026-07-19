class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.length();
        unordered_map<char,int>hash;
        for(int i=0;i<n;i++){
            hash[s[i]]++;
        }
        string str="";
        unordered_map<char,bool>visited;
        for(int i=0;i<n;i++){
hash[s[i]]--;
if(visited[s[i]]){
    continue;
}
while(str.length()>0&&str[str.length()-1]>s[i]&&hash[str[str.length()-1]]>0){
    visited[str[str.length()-1]]=false;
    str.erase(str.length()-1);
}
str+=s[i];
visited[s[i]]=true;
        }
        return str;
    }
};