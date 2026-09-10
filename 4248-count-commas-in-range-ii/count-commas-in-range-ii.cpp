class Solution {
public:
    long long countCommas(long long n) {
        long long count =0;
       long long st=1000;
       long long commas=1;
       while(st<=n){
        long long end=min(n,st*1000-1);
        count+=(end-st+1)*commas;
        st *=1000;
        commas++;
       }
       return count;
    }
};