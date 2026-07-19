class Solution {
public:
    bool canWinNim(int n) {
       // basically esme krna ye hai in first chance me ham 1,2,3 me se kitne bhi stone utha sakte hai agar stone count 4 ho to ham kitne bhi uthaye second move me friend jit jayega if  n==5 in first move i will pick 1 stone and friend choose 1,2,3, any one so in  next move i will definetly win so it is main logic of this game ,
        if(n%4==0){
return false;
        }else{
            return true;
        }
    }
};