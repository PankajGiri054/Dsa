class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        for(int i=0;i<=n-m;i++){
            int count=0;
        int flag=0;
        for(int j=0;j<m;j++){
            char x=needle[j];
            if(haystack[i+j]!=x){
                flag=1;
                break;
            }
            else{
count++;
            }
        }
     if(flag==0){
        return i;
     }
        }
        return -1;
    }
};