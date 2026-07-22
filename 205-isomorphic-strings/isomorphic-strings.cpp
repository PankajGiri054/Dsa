class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int l1=s.length();
        int l2=t.length();
        if(l1!=l2){
return false;
        }
        vector<int>sindex(256,-1);
        vector<int>tindex(256,-1);
       for(int i=0;i<l1;i++){
    if(sindex[s[i]]!=tindex[t[i]]){
        return false;
    }
    sindex[s[i]]=i;
    tindex[t[i]]=i;
       }
        return true;
    }
};