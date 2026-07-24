class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& w, string p) {
        vector<string>ans;
        int n=w.size();
        int m=p.length();
        for(string word:w){
            if(word.length()!=m){
                continue;
            }
        vector<int>wi(256,-1);
        vector<int>pi(256,-1);
        bool match=true;
       for(int i=0;i<m;i++){
        if(wi[word[i]]!=pi[p[i]]){
            match=false;
            break;
        }
        wi[word[i]]=i;
        pi[p[i]]=i;
       }
       if(match){
        ans.push_back(word);
       }
        }
       return ans;
    }
};