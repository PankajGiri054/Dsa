class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n=pattern.length();
        int m=s.length();
        vector<string>word;
        string w="";
 for(int i=0;i<m;i++) {
            if(s[i]==' '){
                word.push_back(w);
                w="";
            }
            else{
                w+=s[i];
            }
 }
 word.push_back(w);
 if(word.size()!=n){
    return false;
 }
        unordered_map<char,int>pi;
        unordered_map<string,int> si;
        for(int i=0;i<n;i++){
            if(pi[pattern[i]]!=si[word[i]]){
                return false;
            }
            pi[pattern[i]]=i+1;
            si[word[i]]=i+1;
        }
        return true;
    }
};