class Solution {
public:
    string capitalizeTitle(string str) {
        int n=str.length();
       int i=0;
       while(i<n){
        int end=i;
        while(end<n&&str[end]!=' '){
            end++;
        }
        int len=end-i;
        if(len<=2){
            for(int j=i;j<end;j++){
            str[j]=tolower(str[j]);
        }
        }
        else{
            str[i]=toupper(str[i]);
        }
        for(int j=i+1;j<end;j++){
            str[j]=tolower(str[j]);
        }
        
        i=end+1;
       }
       return str;
    }
};