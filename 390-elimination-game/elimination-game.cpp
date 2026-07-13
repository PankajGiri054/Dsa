class Solution {
public:
    int lastRemaining(int n) {
      int head=1;
      int step=1;
      bool lefttoright=true;
      int num=n;
      while(num>1){
        if(lefttoright ||num%2==1){
            head=head+step;
        }
        num=num/2;
        step=step*2;
        lefttoright=!lefttoright;
      }
      return head;
    }
};