class Solution {
public:
    bool isHappy(int n) {
        bool res=false;
        if(n==2||n==3){
            return false;
        }
        if(n<9){
            res=true;
        }
        while(n>9&&n<pow(2,31)&&n!=1){
            int di,b=0;
            while(n!=0){
                di=n%10;
                b=b+di*di;
                n=n/10;
            }
            n=b;
            if(n==1){
                res=true;
            }        }
        return res;
    }
};