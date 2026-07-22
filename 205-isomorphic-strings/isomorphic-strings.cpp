class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int l1=s.length();
        int l2=t.length();
        if(l1!=l2){
return false;
        }
        unordered_map<char,char>hash1;
        unordered_map<char,char>hash2;
        for(int i=0;i<l1;i++){
if(hash1.count(s[i])){
    if(hash1[s[i]]!=t[i]){
        return false;
    }}
    else{
        hash1[s[i]]=t[i];
    }
if(hash2.count(t[i])){
    if(hash2[t[i]]!=s[i]){
        return false;
    }}
    else{
        hash2[t[i]]=s[i];
    }   
        }
        return true;
    }
};