class Solution {
public:
    int maxScore(vector<int>& num, int k) {
        int n=num.size();
        int front=0;
        int back=0;
        int sum=0;
        for(int i=0;i<k;i++){
           sum+=num[i];
        }
        int maxi=sum;
        for(int i=0;i<k;i++){
            sum-=num[k-1-i];
            sum+=num[n-1-i];
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};