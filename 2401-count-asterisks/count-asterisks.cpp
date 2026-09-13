class Solution {
public:
    int countAsterisks(string s) {
        int n=s.length();
        int count=0;
        bool x=false;
        for(int i=0;i<n;i++){
if(s[i]=='|'){
    x=!x;
}
if(s[i]=='*'&&!x){
    count++;
}
        }
        return count;
    }
};