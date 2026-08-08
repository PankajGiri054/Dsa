class Solution {
public:
    bool validDigit(int n, int x) {
        bool check=false;
        int temp=n;
        while(temp>0){
            int digit=temp%10;
        if(digit==x){
            check=true;
        }
        temp=temp/10;
        }
        int firstdigit;
        while(n>0){
            int digit=n%10;
 firstdigit=digit;
 n=n/10;
        }
        if(check==true&&firstdigit!=x){
            return true;
        }
        return false;
    }
};