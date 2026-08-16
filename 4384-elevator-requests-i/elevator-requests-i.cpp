class Solution {
public:
    int elevatorRequests(int n, vector<int>& req) {
        int len=req.size();
        int ans=0;
        int j=0;
        for(int i=0;i<len;i++){
ans+=abs(j-req[i]);
j=req[i];
        }
        return ans;
    }
};