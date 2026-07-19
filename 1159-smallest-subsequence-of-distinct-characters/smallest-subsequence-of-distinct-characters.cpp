class Solution {
public:
    string smallestSubsequence(string s) {
        int n=s.length();
        unordered_map<char,int>hash;
        unordered_map<char,bool>visited;
        for(int i=0;i<n;i++){
            hash[s[i]]++;
        }
        string str="";
        for(int i=0;i<n;i++){
            hash[s[i]]--;
            if(visited[s[i]]){
                continue;
            }
            while(str.length()>0){
                int last=str.length()-1;
                if(str[last]>s[i]&&hash[str[last]]>0){
                  visited[str[last]]=false;
                  str.erase(last);
                }
                else{
                    break;
                }
            }
            str+=s[i];
            visited[s[i]]=true;
        }
        return str;
    }
};