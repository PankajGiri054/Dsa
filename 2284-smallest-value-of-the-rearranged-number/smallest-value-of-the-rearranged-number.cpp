class Solution {
public:
    long long smallestNumber(long long num) {
        vector<int>arr;
        if(num==0){
            return 0;
        }
        bool negetive=false;
        if(num<0){
negetive=true;
num=-num;
        }
        while(num>0){
            int n=num%10;
            arr.push_back(n);
            num=num/10;
        }
        if(negetive){
        sort(arr.begin(),arr.end(),greater<int>());
        long long ans=0;
        for(int i=0;i<arr.size();i++){
            ans=ans*10+arr[i];
        }
       return -ans;
        }
        else{
            sort(arr.begin(),arr.end());
          int i=0;
          while(arr[i]==0){
            i++;
          }
          swap(arr[0],arr[i]);
          long long ans=0;
          for(int i=0;i<arr.size();i++){
            ans=ans*10+arr[i];
          }
          return ans;
        }
    }
};