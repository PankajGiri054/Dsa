class Solution {
public:
        int GCD(int esum,int osum){
            while(osum!=0){
                int remen=esum%osum;
                esum=osum;
                osum=remen;
            }
            return esum;
        }
    int gcdOfOddEvenSums(int n) {
        int i=1;
        int c=2*n;
        int osum=0;
        int esum=0;
        while(i<c){
            if(i%2==0){
                esum=esum+i;
            }
            else{
                osum=osum+i;
            }
            i++;
        }
        int gcd=GCD(esum,osum);
        return gcd;
    }
};