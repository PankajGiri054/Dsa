class Solution {
public:
    int countCommas(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
int temp=i;
int len=0;
while(temp>0){
    len++;
    temp=temp/10;
}
if(len>=4){
    count+=(len-1)/3;
}
        }
        return count;
    }
};