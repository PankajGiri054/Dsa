class Solution {
public:
    int nthUglyNumber(int n) {
vector<int>ugly(n);
ugly[0]=1;
int j=0;
int k=0;
int l=0;
for(int i=1;i<n;i++){
    int a=ugly[j]*2;
    int b=ugly[k]*3;
    int c=ugly[l]*5;
    ugly[i]=min(a,min(b,c));
    if(ugly[i]==a){
        j++;
    }
        if(ugly[i]==b){
        k++;
    }
        if(ugly[i]==c){
        l++;
    }
}
return ugly[n-1];
    }
};