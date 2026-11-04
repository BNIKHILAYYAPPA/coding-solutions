class Solution {
public:
    bool isHappy(int n) {
        bool res=false;
        if(n==1||n==7){
            return true;
        }
        while(n>9&&n<pow(2,31)&&n!=1){
            int di,b=0;
            while(n!=0){
                di=n%10;
                b=b+di*di;
                n=n/10;
            }
            n=b;
            if(n==1||n==7){
                res=true;
            }        }
        return res;
    }
};